class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
            ListNode *temp = head ;
            int count = 0 ;
            while( temp != NULL ){
                count++;
                temp = temp->next ;
            }
            if( count == 1 ){
              return NULL ;
                
            }
            int length = count/2 ;
            ListNode *prev = head ;
            ListNode *curr = head ;
            while( length != 0 ){

                    prev = curr ;
                    curr = curr->next ;
                    length-- ;

            }
            prev->next = curr->next ;
            delete(curr) ;
            return head ;

    }   
};