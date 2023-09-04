'''

In Place Reversal of Linked List


Logic 

1) Pointer for next and previous
2) Change direction by making current->next point to previous
3) Move Previous to current 
4) Iterate through list by moving current = current.next stored from before.


'''


class ListNode:
    
    def __init__(self,val):
        self.val = val
        self.next = None

class Solution:
    
    def reverseList(self,head:ListNode):
        if head is None:
            return head
        
        previous,current,next = None,head,None;
        
        while current is not None:
            next = current.next
            current.next=previous
            previous=current
            current=next
        return previous    
    
    
    def print(self,head: ListNode):
        
        curr=head;
        while curr.next is not None:
            
            print(curr.val,"->") 
            curr=curr.next;

def main():
    listNode = ListNode([1,2,3,4,5]);
    s=Solution()
    s.print(l)
    l=s.reverseList(l)
    s.print(l)
            