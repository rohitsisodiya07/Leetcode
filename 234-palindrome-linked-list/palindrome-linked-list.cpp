class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        vector <int> store ;
        ListNode *temp = head ;
        while(temp!=NULL){
            store.push_back(temp->val) ;
            temp = temp->next ;
        }
        int i = 0 ; 
        int j = store.size() - 1 ;
        while( i < j ){

            if( store[i] != store[j]) return false ;
            i++ ;
            j-- ;
        }
        return true ;
    }
};