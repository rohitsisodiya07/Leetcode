class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int length = 0;

        while (temp != NULL) {
            temp = temp->next;
            length++;
        }

        int pos = length - n;

        if (pos == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp = head;
        ListNode* prev = NULL;

        while (pos--) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete temp;

        return head;
    }
};