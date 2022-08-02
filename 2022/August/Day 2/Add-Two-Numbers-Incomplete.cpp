// Source : https://leetcode.com/problems/add-two-numbers/
// STATTS : ATTEMPTED, INcompltete. Should try later.

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int c=0;
        int temp=0;
        ListNode *head1=l1 , *head2=l2;
        ListNode *head3 = new ListNode();
        while(head1 || head2)
        {
            if(head1==NULL)
            {
                temp=head1->val+c;
            }

            else if(head2==NULL)
            {
                temp=head2->val+c;
            }

            else
            {
                temp=head1->val+head2->val +c;

            }

            cout<<" Temp : "<<temp;

            if(temp>9){c=1; temp-=10;}

            if(head1)
            {
                head1=head1->next;
            }

            if(head2)
            {
                head2=head2->next;
            }

            ListNode *l = new ListNode();
            l->val=temp;
            l->next=head3;
            head3=l;

        }

        return head3;

    }
};


// ode* new_node = new Node();

//     /* 2. put in the data */
//     new_node->data = new_data;

//     /* 3. Make next of new node as head */
//     new_node->next = (*head_ref);

//     /* 4. move the head to point to the new node */
//     (*head_ref) = new_node;
