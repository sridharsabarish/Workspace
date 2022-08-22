// Source : https://leetcode.com/problems/merge-strings-alternately/submissions/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string out="";
        int l1=size(word1);
        int l2=size(word2);
        int max=l1>l2?l1:l2;
        int counter=0;
        while(true)
        {
            if(counter<l1 && counter<l2)
            {
                out+=word1[counter];
                out+=word2[counter];
            }
            else if(counter<l2)
            {

                out+=word2[counter];
            }
            else if(counter<l1)
            {
                out+=word1[counter];
            }

            counter+=1;

            if(counter>max){break;}


        }

        return out;



    }
};
