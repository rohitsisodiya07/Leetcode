class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
            vector <int> ans ;
            set <int> s ;
            for( auto ch : nums){

                if( s.count(ch)){
                    ans.push_back(ch) ;
                }
                else 
                    s.insert(ch) ;
            }
            return ans ;
    }
};