class Solution {
public:
    bool isVowel(char key) {

        string vowel = "aeiouAEIOU";
        for (auto ch : vowel) {

            if (key == ch)
                return true;
        }
        return false;
    }
    string reverseVowels(string str) {

        int i = 0;
        int j = str.length() - 1;
        while (i < j) {

            while (i < j && !isVowel(str[i]))
                i++;
            while (i < j && !isVowel(str[j]))
                j--;
            swap(str[i], str[j]);
            i++;
            j--;
        }
        return str;
    }
};