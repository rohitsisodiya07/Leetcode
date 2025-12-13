class Solution {
public:
    int lengthOfLastWord(string s) {

        string word = "";
        for( int i = 0 ; i < s.length() ; i++){
            
            if( s[i] == ' '){
                if( (i+1) < s.length() && s[i+1] != ' ')
                word = "" ;
            }
            else word = word + s[i] ;
            
        }
        int count = 0 ;
        for( int i = 0 ; i < word.length() ; i++){
            count++ ;
        }
        return count ;
        
    }
};