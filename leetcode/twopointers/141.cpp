//Question: https://leetcode.com/problems/linked-list-cycle/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return false;
        ListNode *fast=head->next,*slow=head;
        while(fast!=slow)
        {
            if(fast==NULL||fast->next==NULL)
                return false;
            slow=slow->next;
            fast=fast->next->next;
        }
        return true;
    }
};