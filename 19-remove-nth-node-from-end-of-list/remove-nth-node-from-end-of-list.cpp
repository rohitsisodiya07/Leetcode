
class Solution {
public:
    void deleteAtGiven(ListNode*& head, int pos) {

        ListNode* temp = head;
        ListNode* prev = head;

        if (pos == 0) {
            head = head->next;
            delete temp;
            return;
        }
        while (pos) {
            prev = temp ;
            temp = temp->next;
            pos--;
        }
        prev->next = temp->next;
        delete temp;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int length = 0;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        int pos = length - n;
        deleteAtGiven(head, pos);
        return head;
    }
};