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
        ListNode* slow = nullptr;
        ListNode* fast = head;
        ListNode* temp =new ListNode();
        temp->next = head;
        slow = temp;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->next;
    }
};