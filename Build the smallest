string formMin(string s, int& k) {
    
    stack<char> st;

    for(int i = 0; i < s.length(); i++) {
        if(st.empty() || st.top() <= s[i])
            st.push(s[i]);
        else {
            while(!st.empty() && k > 0 && st.top() > s[i]) {
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
    }
    
    while(k > 0) {
        st.pop();
        k--;
    }
    
    string ans = "";

    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    ans.erase(0, ans.find_first_not_of('0'));
    
    return (ans.length() == 0) ? "0" : ans;
}


string buildLowestNumber(string num, int k)
{   
    if(k > num.length()) return "0";
    return formMin(num,k);
}
