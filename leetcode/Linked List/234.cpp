// Question: https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode *mid=head,*x=head,*y=head,*start=head;
        int length=0;
        while(x!=NULL && x->next!=NULL)
        {
            y=y->next;
            x=x->next->next;
        }
        if(x!=NULL)
            mid=y->next;
        else
            mid=y;
        ListNode *next=NULL,*pre=NULL;
        while(mid!=NULL)
        {
            next=mid->next;
            mid->next=pre;
            pre=mid;
            mid=next;
        }
        while(pre!=NULL)
        {
            if(pre->val!=start->val)
                return false;
            pre=pre->next;
            start=start->next;
        }
        return true;
    }
};