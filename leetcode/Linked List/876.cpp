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
    ListNode *middleNode(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        ListNode *y = head->next, *z = head;
        while (y != NULL)
        {
            z = z->next;
            if (y->next != NULL)
                y = y->next->next;
            else
                y = NULL;
        }
        return z;
    }
};