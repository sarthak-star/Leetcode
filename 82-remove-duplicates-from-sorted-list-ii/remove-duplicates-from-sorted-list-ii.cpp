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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL){
            return NULL;
        }
        if(!head->next){
            return head;
        }
        ListNode* dummyhead= new ListNode(0,head);
        ListNode* curr = dummyhead;
        ListNode* nex = head;
        while(nex && nex->next){
            if(nex->val != nex->next->val){
                curr = nex;
                nex = nex->next;
            }
            else{
                while(nex->next != NULL && nex->val == nex->next->val){
                    nex = nex->next;
                }
                curr->next = nex->next;
                nex = nex->next;
            }
            
        }
        return dummyhead->next;
    }
};