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
    
    def reverseList(self,head:ListNode)->ListNode:
        if head is None:
            return head
        
        previous,current,next = None,head,None;
        
        while current is not None:
            next = current.next
            current.next=previous
            previous=current
            current=next
        return previous    
    
    
    def prints(self,head: ListNode):
        
        curr=head;
        while curr is not None:
            if(curr.next is not None):
                print(curr.val,"..") 
            else:
                print(curr.val)
            curr=curr.next;

def testScenario():
    l = ListNode("Mon")
    e2 = ListNode("Tue")
    e3 = ListNode("Wed")
    e5 = ListNode("Thursday")
    l.next=e2
    e2.next=e3
    e3.next=e5
    s=Solution()
    s.prints(l)
    print("-------------Reversing LinkedList----------")
    rev=s.reverseList(l)
    s.prints(rev)

def main():
    testScenario();
    
main()