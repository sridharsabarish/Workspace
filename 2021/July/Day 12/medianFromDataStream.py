class MedianFinder(object):

    val = [];
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.val = []


    def addNum(self, num):
        """
        :type num: int
        :rtype: None
        """
        self.val.append(num)

    def findMedian(self):
        """
        :rtype: float
        """
        self.val = sorted(self.val)
        l = len(self.val)
        if(l%2==1):
            return self.val[(l)/2];
        else:
            return (self.val[((l-1)/2) +1]+self.val[((l-1)/2)])/2.0






# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()
