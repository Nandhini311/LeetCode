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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* end, *newhead;
        end = newhead = head;
        int size = 1; 
        
        while(end->next != NULL)
        {
            end = end->next;
            size++;
        }
        
        //creating a loop
        end->next = head;
        if(k %= size)               
        {
            for(int i=0; i<size-k; i++)
            {
                end = end->next;
            }
        }
        newhead = end->next;
        end->next = NULL;
        return newhead;
    }
};
