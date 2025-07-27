class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;
        ListNode* prev = head;

        while (prev != NULL) {
            ListNode* curr = prev->next;

            // Move curr forward until we find a value greater than prev->val
            while (curr != NULL && curr->val <= prev->val) {
                curr = curr->next;
            }

            // If such a node was found, add its value, otherwise add 0
            if (curr == NULL) {
                arr.push_back(0);
            } else {
                arr.push_back(curr->val);
            }

            prev = prev->next;
        }

        return arr;
    }
};
