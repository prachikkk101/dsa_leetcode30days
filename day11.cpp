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
        ListNode* temp = head;
        int length = 0;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        if (n == length) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }


        temp = head;
        int i = 1;
        while (i != length - n){
            temp = temp->next;
            i++;
        }


        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;

        return head;
    }
};
