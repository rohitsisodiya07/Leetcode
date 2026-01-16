class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int ans = 0 ;
        for( auto ch : operations){
            if( ch == "X++" || ch == "++X" ) ans++ ;
            else ans-- ;
        }
        return ans ;
    }
};