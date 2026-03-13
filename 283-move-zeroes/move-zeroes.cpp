class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans ;
        for( auto ch : nums){
            if(ch != 0){
                ans.push_back(ch) ;
            }
        }
        int i = 0 ;
        while( i < ans.size()){
            nums[i] = ans[i] ;
            i++;
        }
        while( i < nums.size()){
            nums[i] = 0 ;
            i++;
        }
    }
};