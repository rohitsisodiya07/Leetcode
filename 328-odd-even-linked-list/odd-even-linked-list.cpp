class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        vector<int> store;
        ListNode* temp = head;
        while (temp != NULL) {
            store.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* remp = head;
        for (int i = 1; i <= store.size(); i++) {

            if (i % 2 != 0) {
                remp->val = store[i - 1];
                remp = remp->next;
            }
        }
        for (int i = 1; i <= store.size(); i++) {

            if (i % 2 == 0) {
                remp->val = store[i - 1];
                remp = remp->next;
            }
        }
        return head;
    }
};