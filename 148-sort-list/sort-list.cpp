class Solution {
public:
    ListNode* sortList(ListNode* head) {

        vector<int> v;
        ListNode* temp = head;
        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(), v.end());
        int i = 0;
        ListNode* remp = head;
        while (i < v.size()) {

            remp->val = v[i];
            i++;
            remp = remp->next;
        }
        return head;
    }
};