class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0, lower = 0;

        for(char ch : word) {
            if(ch >= 'A' && ch <= 'Z') upper++;
            else lower++;
        }
        if(upper == word.length()) return true;

        if(lower == word.length()) return true;

        if(word[0] >= 'A' && word[0] <= 'Z' && lower == word.length() - 1) return true;
        
        return false;
    }
};
