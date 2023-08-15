# source : https://leetcode.com/problems/split-strings-by-separator/submissions/
class Solution:
    def splitWordsBySeparator(self, words: List[str], separator: str) -> List[str]:
        output_list=[]
        for word in words:
            tmp=""
            for c in word:
                if c==separator:
                    if tmp == "":
                        continue
                    output_list.append(tmp);
                    tmp=""
                else:
                    tmp+=c
            if not tmp=="":
                output_list.append(tmp)
                tmp=""
        return output_list