class Solution {
public:
    string finalString(string s) {

        string rev = "";
        for (auto ch : s) {

            if (ch == 'i') {

                reverse(rev.begin(), rev.end()) ;
            } else {
                rev += ch;
            }
        }
        return rev ;
    }
};