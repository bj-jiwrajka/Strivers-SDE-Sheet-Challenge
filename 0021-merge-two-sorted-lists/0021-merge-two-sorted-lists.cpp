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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head=NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val<=list2->val)
        {
            head=list1;
            list1=list1->next;
        }
        else
        {
            head=list2;
            list2=list2->next;
        }
        ListNode *curr=head;
        while(list1 and list2)
        {
            if(list1->val<list2->val)
            {
                ListNode *temp=new ListNode(list1->val);
                                curr->next=temp;
                list1=list1->next;
                
            }
            else
            {
                ListNode *temp=new ListNode(list2->val);
                                curr->next=temp;
                list2=list2->next;
            }
                curr=curr->next;
        }
        if(list1)
        {
            curr->next=list1;
        }
        if(list2)
        {
            curr->next=list2;
        }
        return head;
            
        
    }
};