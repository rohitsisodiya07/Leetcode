class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        ListNode* temp = head;
        int length = 0;
        while (temp != NULL) {
            temp = temp->next;
            length++;
        }
        if( length == 1) return NULL ;
        int pos = length / 2;

        temp = head;
        ListNode *prev = temp ;
        while (pos) {

            prev= temp ;
            temp = temp->next;
            pos--;
        }
        prev->next = temp->next ;
        return head ;

    }
};