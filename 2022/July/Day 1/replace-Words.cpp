//Source : https://leetcode.com/problems/replace-words/submissions/// Source : https://leetcode.com/problems/replace-words/submissions/
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {

        string out="";
        string temp="";

        sort(dictionary.begin(),dictionary.end());

        for(auto&i:sentence)
        {
            if(i!=' ')
            {
                temp+=i;
            }
            else
            {

                // Perfrom logic to check if the word is same as the root

                    for(auto&i:dictionary)
                    {
                        int length =size(i);
                        if(temp.substr(0,length)==i)
                        {
                            cout<<temp;
                            out+=i;
                            temp="";
                            break;
                        }


                    }
                   out+=temp+" ";
                temp ="";



            }




        }


        for(auto&i:dictionary)
                    {
                        int length =size(i);
                        if(temp.substr(0,length)==i)
                        {
                            cout<<temp;
                            out+=i;
                            temp="";
                            break;
                        }


                    }
                   out+=temp;
                temp ="";




        return out;


    }
};
