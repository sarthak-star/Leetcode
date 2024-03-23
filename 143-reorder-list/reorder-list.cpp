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
    void reorderList(ListNode* head) {

        if(!head ||  !head->next){
            return;
        }

        stack<ListNode*> st;
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = slow->next;
        while(slow){
            st.push(slow);
            slow = slow->next;
        }

        while(!st.empty()){
            ListNode* top = st.top();
            st.pop();
            ListNode* curr = temp->next;
            temp->next = top;
            top->next = curr;
            temp = curr;
        }

        if(temp){
            temp->next = nullptr;
        }


    }
};