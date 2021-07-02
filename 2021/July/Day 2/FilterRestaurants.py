# Source : https://leetcode.com/problems/filter-restaurants-by-vegan-friendly-price-and-distance/submissions/
class Solution(object):
    def filterRestaurants(self, restaurants, veganFriendly, maxPrice, maxDistance):
        """
        :type restaurants: List[List[int]]
        :type veganFriendly: int
        :type maxPrice: int
        :type maxDistance: int
        :rtype: List[int]
        """
        total_list = {};
        for i in restaurants:

            if((i[2]!=1 and veganFriendly) or i[3]>maxPrice or i[4]>maxDistance):
                continue
            total_list[i[1]]=total_list.get(i[1],[]);
            total_list[i[1]].append(i[0])
        out = sorted(total_list.items(),
                           key=lambda item: item[0],
                           reverse=True)

        l = [];
        for i in out:
            for j in sorted(i[1],reverse=True):
                l.append(j)
        return l
            
