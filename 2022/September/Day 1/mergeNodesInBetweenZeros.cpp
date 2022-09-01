// Source : https://leetcode.com/problems/merge-nodes-in-between-zeros/submissions/
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



        ListNode *out = new ListNode();
        ListNode *start = out;
        int s=0;
        int f=0;
        int sum=0;
        int count=0;
        while(head)
        {

            if(head->val==0)
            {
                if(s==0){
                    s=1;
                }
                if(f==0 && sum!=0)
                {
                    count++;

                    // Insert to list node;
                      ListNode *newNode = new ListNode();
                        newNode->val = sum;
                        newNode->next = NULL;

                         if(count==1)
                    {
                         out->val = newNode->val;
                    }
                    else
                    {
                        out->next = newNode;
                        out = out->next;
                    }
                        sum=0;
                }
            }
            sum+=head->val;
            head = head->next;


        }
        return start;

    }
};
