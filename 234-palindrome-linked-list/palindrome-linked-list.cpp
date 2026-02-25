
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack <int> st ;
        ListNode *temp = head ;
        int count = 0 ;
        while( temp!= NULL ){

                st.push(temp->val) ;
                temp = temp->next ;
                count++ ;
        }
        int length = (count/2) ;
        ListNode *remp = head ;
        while(length){

            if( remp->val != st.top() ) return false ;
            st.pop() ;
            remp = remp->next ;
            length-- ;
        }
        return true ;

    }
};