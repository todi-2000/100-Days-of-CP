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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        ListNode *y = head, *x = head->next;
        while (x != NULL)
        {
            if (x->val != y->val)
            {
                y->next = x;
                y = x;
            }
            x = x->next;
        }
        y->next = NULL;
        return head;
    }
};