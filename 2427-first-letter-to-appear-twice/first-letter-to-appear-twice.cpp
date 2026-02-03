class Solution {
public:
    char repeatedCharacter(string s) {
        map <char, int> m ;
        for( auto ch : s){
            m[ch]++ ;
            if( m[ch] == 2 ){
                return ch ;
            }
        }
        return 0 ;
    }
};