// Source : https://leetcode.com/problems/middle-of-the-linked-list/submissions/
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
    ListNode* middleNode(ListNode* head) {

        ListNode* f = head;
        ListNode*s = head;

        int count=0;
        int count2=0;
        while(f->next)
        {
            count++;
            f=f->next;
        }

        int end;
        end=count%2?(count/2)+1:count/2;
        while(count2!=end)
        {

            s=s->next;
            count2++;

        }
        return s;




    }
};
