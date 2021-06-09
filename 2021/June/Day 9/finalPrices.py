# source : https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/submissions/
class Solution(object):
    def finalPrices(self, prices):
        """
        :type prices: List[int]
        :rtype: List[int]
        """
        out = [];
        for i in range(len(prices)):

            val = prices[i];


            for j in range(i+1,len(prices)):
                if(prices[j]<=val):
                    val = val - prices[j];
                    break;
            out.append(val);
        return out

            
