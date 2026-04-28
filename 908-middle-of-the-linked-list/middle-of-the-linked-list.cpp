/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode *temp = head ;
        ListNode *remp = head ;
        int length = 0 ;
        while( temp != NULL){
            temp = temp->next ;
            length++;
        }
        int i = 1;
        while( i < (length/2+1)){
            remp = remp->next ; 
            i++;

        }
        return remp ;
    }
};