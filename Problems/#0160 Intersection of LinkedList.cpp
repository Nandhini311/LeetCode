/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode* node)
    {
        int c = 0;
        while(node!=NULL)
        {
            node = node->next;
            c = c+1;
        }
        return c;
    }
    
    ListNode *helperfunction(ListNode *f1, ListNode* f2, int d)
    {
        for(int i=0;i<d;i++)
        {
            if(f1!=NULL)
               f1 = f1->next;
        }
        while(f1!=NULL&&f2!=NULL)
        {
            if(f1==f2)
                return f1;
            else
                f1=f1->next;
                f2=f2->next;
    
        }
        return NULL;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = getLength(headA);
        int l2 = getLength(headB);
        
        ListNode *result;
        int d = abs(l1-l2);
        if(l1>=l2)
        {
            result = helperfunction(headA, headB,d);
        }
        else
        {
            result = helperfunction(headB, headA, d);
        }
        return result;
    }
};
