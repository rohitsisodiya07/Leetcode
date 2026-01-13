class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
            map<int, int> m;
            for( auto ch : nums) m[ch]++ ;
            for( auto ch : m){

                if( ch.second > nums.size()/2 ) return ch.first ;
            }
            return -1 ;
    }
};