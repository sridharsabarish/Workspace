// Source : https://leetcode.com/problems/rotate-list/submissions/
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


/* Approach

1) find the size
2) Determines the needed rotations which k%size
3) Write a method which can perform one rotation
4) Invoke a for loop which can perform numRotation
5) Return the resulting ListNode


*/


class Solution {
public:

    ListNode* rotateOnce(ListNode* head)
        {


            ListNode* temp = head;
            ListNode* curr = temp;
            while(temp->next->next)
            {
                temp = temp->next;
            }
            ListNode* start = new ListNode(temp->next->val);
            temp->next = NULL;

            start->next = curr;
            return start;

    }


    ListNode* rotateRight(ListNode* head, int k) {

        if(k==0){return head;}
        if(head==NULL){return head;}
        ListNode *curr = head;

        int size=0;
        while(curr)
        {
            size++;
            curr=curr->next;
        }
        if(size==1){return head;}
        int numRotation = k%size;
        cout<<endl<<" Num Rotation : "<<numRotation<<endl;

        for(int i=0;i<numRotation;i++)
        {

            head = rotateOnce(head);
        }



        return head;


    }
};
