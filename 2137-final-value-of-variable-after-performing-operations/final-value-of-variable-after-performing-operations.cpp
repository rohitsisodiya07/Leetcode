class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
            int x = 0 ;
            for( auto ch : operations){

                if( ch == "++X" || ch == "X++") x++ ;
                else x-- ;
            }
            return x ;
    }
};