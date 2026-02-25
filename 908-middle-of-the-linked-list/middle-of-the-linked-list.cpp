
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {

            temp = temp->next;
            count++;
        }
        int length = (count / 2);
        ListNode* remp = head;
        while (length) {

            remp = remp->next;
            length--;
        }
        return remp ;
    }
};