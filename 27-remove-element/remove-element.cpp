class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
            for( int i = 0 ; i < nums.size() ; i++){

                    if( nums[i] == val){
                        nums[i] = -1 ;
                    }
            }
            sort( nums.begin(), nums.end()) ;
            reverse( nums.begin(), nums.end()) ;
            for( int i = nums.size()-1 ; i >= 0 ; i--){

                    if( nums[i] != -1){
                        break ;
                    }
            }
            int count = 0 ;
            for( auto ch : nums){

                if( ch != -1){
                    count++;
                }
            }
            
            return count ;
    }
};