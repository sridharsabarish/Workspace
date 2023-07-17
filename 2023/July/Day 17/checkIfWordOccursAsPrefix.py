'''
Source : https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/

First Extract all the words
Then go through each element in list the check if it matches to the searchWord


'''
class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        out=sentence.split(" ");

        for i in range(len(out)):
            if(len(out[i])<len(searchWord)):
                continue
            else:
                f=0
                for j in range(len(searchWord)):
                    if(out[i][j]!=searchWord[j]):
                        f=1; break;
                if(f==0):
                    return i+1;
        return -1 
