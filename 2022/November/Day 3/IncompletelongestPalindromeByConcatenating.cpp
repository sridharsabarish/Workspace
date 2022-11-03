
/*


Solution Status : Partially Works. NEeds improvement

Approach:
* Find the letter words which are reverse of each other i.e group them into pairs.
* Find the letter word which doesn't have a pair (One of it could be the middle word);

* size of longest palindrome could be the n*(Number of Pairs )+ Middle letter.
* That makes the length (2*2*number of pairs)





*/
class Solution {
public:
    int longestPalindrome(vector<string>& words) {

        vector<string> visited;
        int numPair=0;
        int middleWord=0;

        for(int i=0;i<size(words);i++)
        {


            string temp = words[i];

            if(std::find(visited.begin(),visited.end(),temp)!=visited.end())
            {
                // This means we have already seen this.
                continue;
            }
            string revTemp = temp;
            reverse(revTemp.begin(),revTemp.end());

            int f=0;
            for( int j=i+1;j<size(words);j++)
            {
                if(words[j]==revTemp)
                {
                    numPair+=1;
                    visited.insert(visited.end(),temp);
                    visited.insert(visited.end(),revTemp);
                    f=1;
                    break;
                }

            }
            if(f==0)
            {
                if(temp==revTemp)
                {
                    middleWord=1;
                }

            }





        }

        cout<<"Num Pair : " <<numPair <<" Middle Word : "<<middleWord;


        return 2*((2*numPair)+middleWord);





    }
};
