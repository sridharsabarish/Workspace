# Source: https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/submissions/
class Solution(object):
    def kWeakestRows(self, mat, k):
        """
        :type mat: List[List[int]]
        :type k: int
        :rtype: List[int]
        """


        dicts ={};

        for i in range(len(mat)):
            dicts[sum(mat[i])]= dicts.get(sum(mat[i]),[]);
            dicts[sum(mat[i])].append(i)
        dicts = sorted(dicts.items())
        lists = [];
        for i in range(len(dicts)):
            for elem in dicts[i][1]:
                lists.append(elem)
        return lists[0:k]




            
