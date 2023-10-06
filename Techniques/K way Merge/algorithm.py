# Source: https://emre.me/coding-patterns/k-way-merge/

'''

Logic :

1.We can push the smallest (first) element of each sorted array in a Min Heap to get the overall minimum.
2.After this, we can take out the smallest (top) element from the heap and add it to the merged list.
3.After removing the smallest element from the heap, we can insert the next element of the same list into the heap.
4.We can repeat steps 2 and 3 to populate the merged list in sorted order.



'''


class ListNode(object):
    def __init__(self,x):
        self.val = x
        self.next = None
                
class ListNodeExtension(ListNode):
    def __lt__(self,other):
        return self.val < other.val

class Solution:
    def mergeKList(self,lists: List[ListNode]) -> ListNode:
        ListNode.__lt__ == ListNodeExtension.__lt__
        min_heap =[]
        for root in lists:
            if root is not None:
                heappush(min_heap,root)
        head = tail=ListNode(0)
        
        while min_heap:
            tail.next = heappop(min_heap)
            tail = tail.next
            if tail.next:
                heappush(min_heap,tail.next)
        return head.next