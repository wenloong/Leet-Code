class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;
        while (l1 != NULL || l2 != NULL) {
            if (l1 == NULL) {
                l1 = new ListNode(0);
            }
            
            if (l2 == NULL) {
                l2 = new ListNode(0);
            }
            
            int result = l1->val + l2->val + carry;
            
            carry = result / 10;
            
            current->next = new ListNode(result % 10);
            current = current->next;
            
            if (l1 != NULL) {
                l1 = l1->next;
            }
            
            if (l2 != NULL) {
                l2 = l2->next;
            }
        }
        
        if (carry > 0) {
            current->next = new ListNode(carry);
        }
        
        return dummyHead->next;
    }
};
