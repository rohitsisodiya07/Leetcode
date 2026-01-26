class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int largest = 0 ;
        vector <bool> ans ;
        for( auto x : candies){

            largest = max(x, largest) ;
        }
        for( auto  x : candies){

            if( x + extraCandies >= largest ) ans.push_back(true) ;
            else ans.push_back(false) ;
        }
        return ans ;
    }
};