// Source : https://leetcode.com/problems/push-dominoes/submissions/
// Attempted. Needs further work. Incomplete
class Solution {
public:
    string pushDominoes(string dominoes) {


        string out=dominoes;

        for(int i=0;i<size(dominoes);i++)
        {
            if((i==0) )
            {
               if(dominoes[i]=='.')
               {
                   if(out[1]=='L'){out[0]='L';}

                }
                else if(dominoes[i]=='L')
                {
                    if(dominoes[i+1]=='R')
                    {
                        //out[i]='.';
                    }
                }

            }
            else if((i==size(dominoes)-1) )
            {
                if(dominoes[i]=='.')
                {
                    if(dominoes[i-1]=='R')
                    {
                        out[i]='R';
                    }
                }
                else if (dominoes[i]=='L')
                {
                    if(dominoes[i-1]=='R')
                    {
                        //out[i]='.';
                    }
                }

            }

            else
            {
                if(dominoes[i]=='.')
                {
                    if(dominoes[i+1]=='L')
                    {
                        if(dominoes[i-1]=='R')
                        {

                            out[i]='.';
                        }
                        else
                        {

                            out[i]='L';
                        }

                    }


                    else if(dominoes[i-1]=='R')
                    {
                        if(dominoes[i+1]=='L')
                        {

                            out[i]='.';
                        }
                        else
                        {

                            out[i]='R';
                        }

                    }



                }


            }

        }
        return out;
    }
};
