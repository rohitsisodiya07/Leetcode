class Solution {
public:
    bool isPalindrome(int x) {
        
        if( x == 0){
            return true ;
        }
        if( x < 0 || x % 10 == 0){
            return false ;
        }
        long rev = 0 ;
        while( x ){

            rev = rev * 10 + ( x % 10) ;
            if( x == rev || x / 10 == rev){
                return true ;
            }
            x /= 10 ;
        }
        return false ;
    }
};