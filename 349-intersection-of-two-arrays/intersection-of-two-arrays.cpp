class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set <int> st1 ;
        set <int> st2 ;
        vector <int> v ;

        for( auto ch : nums1){
            st1.insert(ch) ;
        }
        for( auto ch : nums2){
            st2.insert(ch) ;
        }
        
        for( auto ch : st1 ){

            if(st2.find(ch) != st2.end()){

                v.push_back(ch) ;
            }
        }
        return v ;
    }
};