class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;

        for (auto ch : operations) {

            if (ch == "C") {
                st.pop();
            }
            else if (ch == "D") {
                st.push(st.top() * 2);
            }
            else if (ch == "+") {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first + second);
            }
            else {
                st.push(stoi(ch)); 
            }
        }

        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};