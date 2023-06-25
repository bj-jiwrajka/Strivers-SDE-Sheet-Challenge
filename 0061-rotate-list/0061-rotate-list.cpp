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
    int countLen(ListNode *head)
    {
        if(!head) return 0;
        if(head->next==NULL) return 1;
        return 1+countLen(head->next);
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
       int c=countLen(head);
        if(c==0 or c==1 or (c==2 and k%2==0)) return head;
       
            if(k&1 and c==2)
            {
                ListNode *temp=head;
                head=head->next;
                head->next=temp;
                temp->next=NULL;
                return head;
            }
        k=k%c;
        if(k==0) return head;
        ListNode *temp=head;
        ListNode *nexttemp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
            nexttemp=nexttemp->next;
        }
        nexttemp=nexttemp->next;
        nexttemp->next=head;
        head=nexttemp;
        temp->next=NULL;
        return rotateRight(head,k-1);
        
    }
};