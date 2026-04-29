
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        

        ListNode *temp = head ;
        ListNode *prev = head ;
        int length = 0 ;
        while( temp != NULL){
            temp = temp->next ;
            length++;
        }
        int pos = length - n;

        temp = head ;
        if( pos == 0 ) return head->next ;

        while(pos > 1){
            temp = temp->next ;
            pos--;
        }
        prev = temp->next ;
        temp->next = prev->next ;
        delete prev ;

        return head ;

    }
};