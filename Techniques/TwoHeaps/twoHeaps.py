'''
Two Heap Algorithm : Learning from https://emre.me/coding-patterns/two-heaps/

1. We can store the smaller part of the list in a max_heap.
   We are using max_heap because we are only interested in knowing the largest number in the first half of the list.
2.We can store the larger part of the list in a min_heap. We are using min_heap because we are only interested in knowing the smallest number in the second half of the list.
3.Inserting a number in a heap will take O(log N) (better than the brute force approach)
4.The median of the current list of numbers can be calculated from the top element of the two heaps.

Todo: Undertand heaps better.

'''


from heapq import *
class MedianFinder:
    
    def __init__(self):
        self.max_heap=[]
        self.min_heap=[]
        
    def addNum(self,num:int) -> None:
        if not self.max_heap or -self.max_heap[0] >=num:
            heappush(self.max_heap,-num)
        else:
            heappush(self.min_heap,num)
            
        if len(self.max_heap) > len(self.min_heap) +1:
            heappush(self.min_heap,-heappop(self.max_heap))
        elif len(self.max_heap) < len(self.min_heap):
            heappush(self.max_heap,-heappop(self.min_heap))
    
    def findMedian(self) -> float:
        
        if len(self.max_heap) == len(self.min_heap):
            return -self.max_heap[0] /2.0 + self.min_heap[0]/2.0

        return -float(self.max_heap[0])
