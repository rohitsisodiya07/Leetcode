class Solution {
public:
    string removeDuplicates(string s) {
        
            stack <char> st ;
            string ans = "" ;
            for( auto ch : s){

                if( st.empty() ) st.push(ch) ;
                else if( ch == st.top() ) st.pop() ;
                else st.push(ch) ;
            }
            while(!st.empty()){
                ans += st.top() ;
                st.pop() ;
            }
            reverse(ans.begin(), ans.end()) ;
            return ans ;
    }
};