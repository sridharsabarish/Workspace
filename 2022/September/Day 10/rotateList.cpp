/* Source : https://leetcode.com/problems/rotate-list/submissions/
   Solution Quality : Good, 8ms, 11.8MB

*/
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


/*

Rotate Logic : Remove the last element. Add it in as the head and make the next point to current head;

*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* temp=head;

        if(head==NULL){return head;}
        int count=0;
        while(temp){count++;temp=temp->next;}

        int num=k%count;

        int tmp;


        for(int i=0;i<num;i++)
        {


        // Remove from the end

        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }

        ListNode* second_last = head;
        while(second_last->next->next!=NULL)
        {
            second_last=second_last->next;
        }
        tmp = second_last->next->val;
        delete second_last->next;
        second_last->next=NULL;


        // Add to Front
        ListNode* out = new ListNode();
        out->val = tmp;
        out->next = head;

        head = out;
        }
        return head;


    }
};
