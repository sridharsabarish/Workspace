//source : https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/
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
    int getDecimalValue(ListNode* head) {

        vector<int> v;

        while(head)
        {
            v.insert(v.end(),head->val);
            head = head->next;
        }

        int out = 0;
        int len = size(v);
        for(int i=0;i<len;i++)
        {
            out+= v[i]*pow(2,len-i-1);
        }
        return out;
    }
};
