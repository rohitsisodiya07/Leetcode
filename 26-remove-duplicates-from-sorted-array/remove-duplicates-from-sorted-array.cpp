class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map <int, int> m ;
        int count = 0 ;
        for( auto ch : nums){
            m[ch]++ ;
        }
        int length = nums.size() ;
        int i = 0 ;
        for( auto ch : m){

            nums[i] = ch.first ;
            i++;
            count++ ;
        }
        return count ;

    }
};