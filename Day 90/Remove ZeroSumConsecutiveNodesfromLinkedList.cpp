class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;

        while (curr != nullptr) {
            int sum = 0;
            while (head != nullptr) {
                sum += head->val;
                if (sum == 0) {
                    curr->next = head->next;
                }
                head = head->next;
            }
            curr = curr->next;
            if (curr != nullptr) {
                head = curr->next;
            }
        }

        return dummy->next;
    }
};