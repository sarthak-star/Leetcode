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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(n--){
            fast = fast->next;
        }
        if(fast == nullptr){
            return head->next;
        }
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* toDel = slow->next;
        slow->next = toDel->next;
        delete(toDel);

        return head;
    }
};