class Solution {
public:
void dfs(string word, string final, vector<vector<string>>& ans, unordered_set<string>& st, vector<string>& s, int count, int freq) {
    if (word == final && count == freq) {
        ans.push_back(s);
        return;
    }
    
    for (int i = 0; i < word.size(); i++) {
        char c = word[i];
        for (char j = 'a'; j <= 'z'; j++) {
            word[i] = j;
            if (st.find(word) != st.end()) {
                st.erase(word);
                s.push_back(word);
                if (count < freq) {
                    dfs(word, final, ans, st, s, count + 1, freq);
                }
                s.pop_back();
                st.insert(word);
            }
        }
        word[i] = c;
    }
}

vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
    vector<vector<string>> ans;
    
    if (find(wordList.begin(), wordList.end(), endWord) == wordList.end()) {
        return ans;  
    }

    unordered_set<string> st(wordList.begin(), wordList.end());
    unordered_set<string> se(st);
    st.erase(beginWord);
    se.erase(beginWord);

    queue<pair<string, int>> q;
    q.push({beginWord, 1});

    int steps = -1;
    while (!q.empty()) {
        string current = q.front().first;
        int depth = q.front().second;
        q.pop();

        if (current == endWord) {
            steps = depth;
            break;
        }

        for (int i = 0; i < current.size(); i++) {
            char original = current[i];
            for (char ch = 'a'; ch <= 'z'; ch++) {
                current[i] = ch;
                if (se.count(current)) {
                    q.push({current, depth + 1});
                    se.erase(current);
                }
            }
            current[i] = original;
        }
    }

    if (steps != -1) {
        vector<string> s = {beginWord};
        dfs(beginWord, endWord, ans, st, s, 1, steps);
    }

    return ans;
}
};
