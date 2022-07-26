// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/
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
        ListNode* h = head;

        int prev =-111;

        while(head && head->next)
        {

            if(head->next->val==head->val)
            {
                //cout<<" Head "<<head->val<< " Next is "<<head->next->val<<endl;
                int f=0;
                ListNode *curr = head;
                while(f==0 && curr)
                {

                    if(curr->next==NULL)
                    {
                        head->next = NULL;
                        f=1;
                    }
                    else if(curr->next->val==head->val)
                    {
                        curr = curr->next;
                    }
                    else
                        {f=1;}

                }
                head->next = curr->next;
            }

            prev = head->val;
            head = head->next;

        }
        return h;

    }
};
