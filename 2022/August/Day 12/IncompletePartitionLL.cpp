// Source : https://leetcode.com/problems/partition-list/
// Status : Brain fog, stuck. Needs revisit.

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
    ListNode* partition(ListNode* head, int x) {

        ListNode* curr = head;
        // Start from X, if element is smaller than x, then store it in a temp array and point the current to the next.
        vector<int> temp;
        int f=0;
        while(head)
        {

            if(head->val==x)
            {
                f=1;

            }
            else
            {
                if(f && head->val<x)
                {
                 temp.insert(temp.end(),head->val);
                 // A bit stuck here i would say. Need to figure out how to delete these values from linked list.
                 // Also need to find out how to inser these values from array into the original list. should be easy but some brain fog now.



                }


            }

            head=head->next;




        }
        cout<<endl;
        for(auto&i:temp)
        {
            cout<<i<<" ";
        }

        return curr;

    }
};
