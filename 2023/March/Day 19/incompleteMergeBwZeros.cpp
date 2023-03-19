// Source : https://leetcode.com/problems/merge-nodes-in-between-zeros/

// A bit confused with linkedlist insertions. Need to work on this more.
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = head;
        ListNode* last = new ListNode();
        int sum=0;
        int f=1;
        while(curr->next)
        {
            sum+=curr->val;
            if(curr->val==0)
            {
                f=1;
            }
            
            else if(curr->next==0)
            {
                
                f=0;
                 ListNode *newNode = new ListNode(); 
                newNode->data=sum;
                newNode->next=NULL;
                
                if(*last==NULL)
                {
                    last=newNode;
                }
                else
                {
                     last = last->next;  
                }
                last->next=newNode;
            }
            
            sum+=
            
            
        }
    }
};