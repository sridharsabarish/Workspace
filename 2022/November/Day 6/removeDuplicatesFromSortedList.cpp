// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/
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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* curr = head;

        while(curr && curr->next)
        {
            ListNode* check = curr->next;

            while(check && curr->val == check->val)
            {
                check=check->next;
            }

            curr->next = check;
            curr = curr->next;
        }
        return head;
    }
};
