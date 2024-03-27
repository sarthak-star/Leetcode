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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* superfast = head;
        int temp = k;
        while(--k){
            superfast = superfast->next;
        }
        while(superfast->next){
            superfast = superfast->next;
            fast = fast->next;
        }

        while(--temp){
            slow = slow->next;
        }

        temp = fast->val;
        fast->val = slow->val;
        slow->val = temp;

        return head;

    }
};