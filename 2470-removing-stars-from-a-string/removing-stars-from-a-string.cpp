class Solution {
public:
    string removeStars(string s) {

        stack<char> st;
        for (auto ch : s) {

            if (st.empty()) {
                st.push(ch);
            } else if (ch == '*') {
                st.pop();
            } else {
                st.push(ch);
            }
        }
        string res = "";
        while (!st.empty()) {

            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};