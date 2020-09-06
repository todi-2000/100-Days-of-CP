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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *carry = new ListNode;
        carry->next = NULL;
        carry->val = 0;
        ListNode *y = l1, *pre, *prel2;
        while (l1 != NULL && l2 != NULL)
        {
            pre = l1;
            prel2 = l2;
            int x = ((l1->val) + (l2->val) + carry->val) % 10;
            carry->val = ((l1->val) + (l2->val) + carry->val) / 10;
            l1->val = x;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l1 == NULL && l2 == NULL && carry->val != 0)
            pre->next = carry;
        else if (l1 == NULL)
        {
            pre->next = l2;
            while (l2 != NULL)
            {
                prel2 = l2;
                int x = ((l2->val) + carry->val) % 10;
                carry->val = ((l2->val) + carry->val) / 10;
                l2->val = x;
                l2 = l2->next;
            }
            if (carry->val != 0)
                prel2->next = carry;
        }
        else
        {
            while (l1 != NULL)
            {
                pre = l1;
                int x = ((l1->val) + carry->val) % 10;
                carry->val = ((l1->val) + carry->val) / 10;
                l1->val = x;
                l1 = l1->next;
            }
            if (carry->val != 0)
                pre->next = carry;
        }
        return y;
    }
};