class Solution {
public:
 int ssd(int num){
        int last, sum = 0 ;
        while(num){
            last = num % 10 ;
            sum = sum + last * last ;
            num /= 10 ;
        }
        return sum ;
    }
    bool isHappy(int n) {
         while( n > 4){
            
            n = ssd(n) ;
            cout << n << endl ;
        }
        if(n == 1) return 1 ;
        else return 0 ;
    }
};