//Question: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
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
    int getDecimalValue(ListNode *head)
    {
        ListNode *x = head, *y = head;
        int ans = 0, len = 0;
        while (x != NULL)
        {
            len++;
            x = x->next;
        }
        while (y != NULL)
        {
            ans = ans + (y->val) * pow(2, len - 1);
            len--;
            y = y->next;
        }
        return ans;
    }
};