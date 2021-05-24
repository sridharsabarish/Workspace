class Solution(object):
    def sortByBits(self, arr):
        """
        :type arr: List[int]
        :rtype: List[int]
        """
        dicts ={self.countOnes(i):[] for i in arr}

        for i in arr:
            dicts[self.countOnes(i)].append(i);

        out = [];
        for key in dicts.keys():
            dicts[key] = sorted(dicts[key]);
            for elem in dicts[key]:
                out.append(elem);
        return out;


    def countOnes(self,n):
        count =0;
        while(n):
            if(int(n%2)==1):
                count+=1;
            n = int(n/2);
        return count

            
