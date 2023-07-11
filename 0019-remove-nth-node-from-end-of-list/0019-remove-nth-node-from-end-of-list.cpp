/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* removeNthFromEnd(ListNode *head, int n)
        {
            int cnt = 0;
            ListNode *temp = head;
            while (temp)
            {
                temp = temp->next;
                cnt++;
            }
            if (cnt == n) return head->next;
            temp = head;
            n = cnt - n - 1;
            while (n--)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            return head;
        }
};