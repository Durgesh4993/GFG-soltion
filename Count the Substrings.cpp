class Solution
{
    public:
    int countSubstring(string S) {
    int count = 0;
    unordered_map<int, int> map;
    map[0] = 1;
    int diff = 0;
    for (int i = 0; i < S.length(); i++) {
        char c = S[i];
        diff += isupper(c) ? 1 : -1;
        if (map.count(diff)) {
            count += map[diff];
        }
        map[diff]++;
    }
    return count;
}
};
