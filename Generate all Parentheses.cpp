int Solution::isValid(string s) {
     stack<char> st;
    unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char c : s) {
        if (mapping.find(c) == mapping.end()) { 
            st.push(c);
        } else { 
            if (st.empty() || st.top() != mapping[c]) {
                return 0;
            }
            st.pop();
        }
    }
    return st.empty() ? 1 : 0;
}
