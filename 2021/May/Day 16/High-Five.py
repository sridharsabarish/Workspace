#https://leetcode.com/problems/high-five/submissions/


class Solution:
    def highFive(self, items: List[List[int]]) -> List[List[int]]:
        dicts ={}

        for i in items:
            if(not i[0] in dicts.keys()):
                dicts[i[0]] =[];
            dicts[i[0]].append(i[1]);

        lists =[]
        for i in sorted(dicts.keys()):
            dicts[i] = sorted(dicts[i],reverse=True);
            dicts[i] = int(mean(dicts[i][0:5]))
            l = [i,dicts[i]];
            lists.append(l)
        return lists
