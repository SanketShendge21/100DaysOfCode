class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || k==1){
            return head;
        }
       int len = 1;
       ListNode* dummy = new ListNode(0);
       dummy->next = head;
       ListNode* cur = dummy;
       ListNode* prev = dummy;
       ListNode* next = dummy;
       while(head->next != NULL){
           head = head->next;
           len++;
       } 
        while(len >=k){
            cur = prev->next;
            next = cur->next;
            for(int i=1;i<k;i++){
                cur->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = cur->next;
            }
            prev = cur;
            len = len - k;
        }
        return dummy->next;
    }
};