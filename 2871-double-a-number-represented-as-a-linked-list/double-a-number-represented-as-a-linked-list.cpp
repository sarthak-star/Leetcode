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
    ListNode* reverseList(ListNode* node) {
        ListNode *previous = nullptr, *current = node, *nextNode;

        // Traverse the original linked list
        while (current != nullptr) {
            // Store the next node
            nextNode = current->next;
            // Reverse the link
            current->next = previous;
            // Move to the next nodes
            previous = current;
            current = nextNode;
        }
        // Previous becomes the new head of the reversed list
        return previous;
    }

    ListNode* doubleIt(ListNode* head) {
        int carry = 0;
        int product;

        ListNode* temp = reverseList(head);

        ListNode* current = temp;
        ListNode* prev = nullptr;

        while (current) {
            int newVal = current->val * 2 + carry;
            current->val = newVal % 10;

            if (newVal > 9) {
                carry = 1;
            } else {
                carry = 0;
            }
            prev = current;
            current = current->next;
        }

        if (carry != 0) {
            ListNode* extraNode = new ListNode(carry);
            prev->next = extraNode;
        }

        // Reverse the list again to get the original order
        ListNode* result = reverseList(temp);

        return result;
    }
};