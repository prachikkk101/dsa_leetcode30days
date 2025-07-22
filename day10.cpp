class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<int> stk;            
        vector<int> arr;

    
        while (temp != NULL) {
            stk.push(temp->val);   
            temp = temp->next;
        }

    
        while (!stk.empty()) {
            arr.push_back(stk.top());
            stk.pop();
        }

        
        temp = head;
        int i = 0;
        while (temp != NULL) {
            if (temp->val != arr[i]) {
                return false;
            }
            temp = temp->next;
            i++;
        }

        return true;
    }
};
