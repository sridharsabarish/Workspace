# Source : https://leetcode.com/problems/subdomain-visit-count/submissions/
class Solution(object):
    def subdomainVisits(self, cpdomains):
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        dicts = {};
        for i in cpdomains:
            l = i.split(' ');
            count = int(l[0]);
            domain = str(l[1]);
            sub = domain.split('.')
            start = 0;
            end =len(sub);
            s = "."
            total =[]
            while(start<len(sub)):
                key = s.join(sub[start:end])
                dicts[key] = dicts.get(key,0);
                dicts[key] += count;
                start+=1;

        finallist = [];
        for i in dicts.keys():
            strs=str(dicts[i])+" "+str(i);
            finallist.append(strs)

        return finallist
