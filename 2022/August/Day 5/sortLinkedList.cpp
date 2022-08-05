// Source : https://leetcode.com/problems/sort-list/submissions/
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




    ListNode* sortList(ListNode* head) {
        vector<int> v;
        while(head)
        {
            v.insert(v.end(),head->val);
            head = head->next;
        }
        head = NULL;

        sort(v.begin(),v.end(),greater <>());
        for(auto&i:v)
        {
            ListNode* new_node= new ListNode();
	        new_node->val=i;
           new_node->next=head;

            head=new_node;

        }
        return head;

    }
};
