class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int, int> m ;
        for( auto ch : nums){
            m[ch]++ ;
        }
        for( auto ch : m){
            if( ch.second == 1) return ch.first ;
        }
        return 0 ;
    }
};