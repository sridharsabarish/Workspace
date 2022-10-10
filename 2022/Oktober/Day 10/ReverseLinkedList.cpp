// Source : https://leetcode.com/problems/reverse-linked-list/
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

    ListNode* insert_node(ListNode* root,int item)
    {
        ListNode* temp = new ListNode;
        ListNode* ptr;
        temp->val=item;
        temp->next=NULL;

        if(root==NULL)
        {
            root=temp;
        }
        else
        {
            ptr=root;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
        return root;

    }
    ListNode* reverseList(ListNode* head) {

        vector<int> out;
        ListNode* Temp;
        while(head)
        {
            out.insert(out.end(),head->val);
            head=head->next;
        }
        reverse(out.begin(),out.end());


        ListNode* root = NULL;
        for(int i=0;i<size(out);i++)
        {
            root=insert_node(root,out[i]);
        }



return root;
    }
};
