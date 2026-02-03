class Solution {
public:
    void converttitle(string& str) {

        for (int i = 0; i < str.length(); i++) {

            if (i == 0)
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);

        }
    }
    void convertlower(string& str) {

        for (int i = 0; i < str.length(); i++) {

            str[i] = tolower(str[i]);
            
        }
    }
    string capitalizeTitle(string title) {

        string word = "";
        string ans = "";
        for (auto ch : title) {

            if (ch == ' ') {

                if (word.length() > 2) {
                    converttitle(word);
                } else {
                    convertlower(word);
                }
                ans += word;
                ans += " ";
                word = "" ;
            }
            else word += ch ;
        }
        if (word.length() > 2) {
            converttitle(word);
        } else {
            convertlower(word);
        }
        ans += word;
        return ans ;
    }
};