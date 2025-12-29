class Solution {
public:
    int linearsearch(char key, string str) {

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == key)
                return i; // return index
        }
        return -1; // not found
    }

    bool canConstruct(string ransomNote, string magazine) {

        for (auto ch : ransomNote) {

            int idx = linearsearch(ch, magazine);

            if (idx == -1)
                return false;

            // remove used character
            magazine.erase(idx, 1);
        }
        return true;
    }
};
