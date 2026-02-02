class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map <char, int> m1 ;
        map <char, int> m2 ;

        if( s.length() != t.length() ) return false ;
        for( auto ch : s) m1[ch]++ ;
        for( auto ch : t) m2[ch]++ ;
        return m1 == m2 ;


    }
};