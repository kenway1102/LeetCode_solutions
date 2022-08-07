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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count = 0;
        while(temp->next != NULL){
                temp = temp->next;
                count++;
        }
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        count = count-n;
            if(count>=0)
            {
                for(int i=0;i<count;i++)
                {
                    temp2=temp2->next;
                    temp1=temp1->next; 
                }
                temp1->next=temp2->next;
            }
            else
            {
                for(int i=0;i<abs(count);i++)
                    head=head->next;
            }
        return head;
    }
};