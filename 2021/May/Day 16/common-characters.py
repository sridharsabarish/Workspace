# Source : https://leetcode.com/problems/find-common-characters/submissions/
class Solution:
    def commonChars(self, A: List[str]) -> List[str]:

        elem = list(A[0]);
        dicts ={};

        for i in (A[0:]):

            for e in list(set(elem)):
                if(e not in i):
                    elem.remove(e)
                    dicts[e]=0;
                else:
                    if(not e in dicts.keys()):
                        dicts[e]=i.count(e);
                    else:
                        dicts[e] = min(dicts[e],i.count(e))


        lists =[];
        for e in set(elem):
            for i in range(dicts[e]):
                lists.append(e);
        return lists
