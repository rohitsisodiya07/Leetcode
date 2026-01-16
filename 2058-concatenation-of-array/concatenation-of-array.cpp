class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans ;
        
        for(auto ch : nums){
            ans.push_back(ch) ;
        }
        for(auto ch : nums){
            ans.push_back(ch) ;
        }
        return ans ;
    }
};