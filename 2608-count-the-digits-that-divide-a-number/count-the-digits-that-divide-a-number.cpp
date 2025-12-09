class Solution {
public:
    int countDigits(int num) {
        int temp = num, last, count = 0 ;
           while(num){
               last = num % 10 ;
               if( temp % last == 0){
                   count++ ;
               }
               num /= 10 ;
           }
           return count ;
    }
};