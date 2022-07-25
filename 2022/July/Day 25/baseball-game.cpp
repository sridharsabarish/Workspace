// Source : https://leetcode.com/problems/baseball-game/submissions/
class Solution {
public:
    int calPoints(vector<string>& ops) {


        vector<int> out;
        int val=0;
        for(auto&i:ops)
        {


                if(i=="C")
                {
                    out.pop_back();
                }
                else if(i=="D")
                {
                     val = out[size(out)-1]*2;
                    out.insert(out.end(),val);

                }

                else if(i=="+")
                {
                     val = out[size(out)-1]+out[size(out)-2];
                    out.insert(out.end(),val);
                }


            else
            {
                out.insert(out.end(),stoi(i));
            }



            }

        // for(auto&i:out)
        // {
        //     cout<<i<<" ";
        // }
        return accumulate(out.begin(), out.end(), 0);




    }
};
