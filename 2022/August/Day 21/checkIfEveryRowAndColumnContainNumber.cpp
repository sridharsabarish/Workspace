/**

Source   : https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/submissions/
Runtime  : 213 ms, 78% faster
Memory   : 64 MB, 64.66% lesser than other submissions


**/
class Solution {
public:

    bool checkAll(vector<int> v)
    {

        for(int i=0;i<size(v);i++)
        {

            if(std::find(v.begin(),v.end(),i+1)==v.end())
            {
                //cout<<" Did not find "<<i+1;
                return false;
            }


        }
        return true;

    }

    bool checkValid(vector<vector<int>>& matrix) {

       //Check Rows
       for(auto&i:matrix)
       {
           if(!checkAll(i)){return false;}

       }

        //Transpose and check columns

        vector<vector<int>> tran;
        int temp=0;
        for(int i=0;i<size(matrix);i++)
        {
            vector<int> out;
            for(int j=0;j<size(matrix);j++)
            {
                out.insert(out.end(),matrix[j][i]);

            }
            tran.insert(tran.end(),out);
        }

        for(auto&i:tran)
       {
           if(!checkAll(i)){return false;}

       }


        return true;
    }
};
