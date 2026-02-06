class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        map <char, int> m ;
        if( s.size() == 1 ) return true ;
        for( auto ch : s){
            m[ch]++;
        }
        int check = m[s[0]] ;
        for( auto ch :m){

            if( check != ch.second){
                return false ;
            }
        }
        return true ;
    }
};