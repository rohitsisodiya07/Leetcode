class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        map <int, int> m ;
        vector< int> v ;
        for( auto ch : nums){

            m[ch]++ ;
        }
        for( auto ch : m){

            if( ch.second > 1){
                v.push_back(ch.first) ;
            }
        }
        return v ;
        
    }
};