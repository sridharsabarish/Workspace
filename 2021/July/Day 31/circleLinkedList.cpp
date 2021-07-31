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
    bool hasCycle(ListNode *head) {

        if(head==NULL)
        {
            return false;
        }
        ListNode *first = head;
        ListNode *second = head->next;

        while(first!=NULL and second!=NULL)
        {
            if(first==second)
            {
                return true;
            }
            first = first->next;
            if(second->next!=NULL)
            {
            second = second->next->next;
            }
            else
            {
                return false;
            }

        }
        return false;

    }
};
