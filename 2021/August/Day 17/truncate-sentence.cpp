class Solution {
public:
    string truncateSentence(string s, int k) {

        string s1 = "";

        int word =0;

        for(auto &i:s)
        {
           if(i==' ')
           {
               word+=1;
           }
            if(word==k)
            {
                break;
            }
            else
            {
                s1+=i;
            }
        }
        return s1;
    }
};
