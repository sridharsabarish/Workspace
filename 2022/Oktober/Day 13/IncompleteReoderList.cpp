// Source : https://leetcode.com/problems/reorder-list/
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

    void insert(ListNode* root, int item)
    {
        ListNode* temp = new ListNode;
        ListNode* ptr;
        temp->val = item;
        temp->next = NULL;

        if (root == NULL)
            root = temp;
        else {
            ptr = root;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = temp;
        }

    }

    void reorderList(ListNode* head)
    {
        ListNode* curr = head;
        vector<int> val;
        while(curr)
        {
            val.insert(val.end(),curr->val);
            curr = curr->next;
        }
        head = NULL;
        curr = NULL;
        int n = size(val);
        for(int i=0;i<n/2;i++)
        {
            insert(head,val[i]);
            insert(head,val[n-i-1]);
        }
    }
};
