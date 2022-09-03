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
    ListNode* deleteDuplicates(ListNode* head) {
            if(head == NULL)
                    return head;
            
            int curr = head->val;
            ListNode *temp = head;
            ListNode *del;
            
            while(temp->next != NULL)
            {
                    
                    if(curr == temp->next->val)
                    {
                            del = temp->next;
                            temp->next = temp->next->next;
                            del->next = NULL;
                            delete del;
                            continue;
                    }
                    else
                    {
                            curr = temp->next->val;
                    }
                    temp = temp->next;
            }
            
            return head;
    }
};