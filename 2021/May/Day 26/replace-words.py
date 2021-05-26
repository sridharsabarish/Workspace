# Source : https://leetcode.com/problems/replace-words/submissions/
class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:

        split = sentence.split(' ');

        for j in range(len(split)):
            for i in dictionary:
                if(split[j][:len(i)]==i):
                    split[j] =i;
        s="";
        for i in range(len(split)):
            s+=split[i];
            if(i!=len(split)-1):
                s+=" ";
        return s;
