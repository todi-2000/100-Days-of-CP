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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *fast = head, *slow = head, *prev = head;
        int i = 1;
        while (i < n)
        {
            if (fast->next == NULL)
                return NULL;
            if (fast != NULL)
                fast = fast->next;
            i++;
        }
        while (fast->next != NULL)
        {
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }
        if (slow == head)
        {
            head = head->next;
        }
        ListNode *temp = slow->next;
        prev->next = temp;
        slow->next = NULL;

        return head;
    }
};