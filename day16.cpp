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
    // Helper function to merge two sorted linked lists
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        // Attach the remaining nodes
        tail->next = l1 ? l1 : l2;

        return dummy->next;
    }

    // Main sort function
    ListNode* sortList(ListNode* head) {
        // Base case: empty list or single node
        if (!head || !head->next) return head;

        // Step 1: Find middle using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head->next; // start fast one step ahead

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Split the list into two halves
        ListNode* mid = slow->next;
        slow->next = nullptr;

        // Step 3: Sort both halves
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        // Step 4: Merge the sorted halves
        return merge(left, right);
    }
};
