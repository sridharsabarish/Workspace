// Source : https://leetcode.com/problems/spiral-matrix/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {


    int row = size(matrix);
    int col = size(matrix[0]);

    vector<int> out;
    int count=0;

    int i=0;
    int j=0;
    while(count<row*col)
    {

        //Logic 1 . Go from left to right

         while(j<col)
        {

            if(matrix[i][j]>=101)
            {
                // This means its time to switch to next logic;
                break;
            }
             else
             {
                 out.insert(out.end(),matrix[i][j]);
                 cout<<matrix[i][j]<<" ";
                  matrix[i][j]=101;
                 count++;
             }
             j++;
        }
        j=j-1;

        //cout<<"\n End of logic 1 : " <<i<<" "<<j<<endl;


        //Logic 2 . Go from top to bottom
        i++;
        while(i<row)
        {
            if(matrix[i][j]>=101)
            {  // This means its time to switch to next logic
                break;
            }
            else
            {
                out.insert(out.end(),matrix[i][j]);
                cout<<matrix[i][j]<<" ";
                matrix[i][j]=101;
                count++;
                i++;
            }

        }
         //cout<<"\n End of logic 2 : "<<i<<" "<<j<<endl;

        i--;
        j--;
        //Logic 3. Go from left to right

        while(j>=0)
        {

            if(matrix[i][j]>=101)
            {
                break;
            }
            else
            {
                out.insert(out.end(),matrix[i][j]);
                 cout<<matrix[i][j]<<" ";
                matrix[i][j]=101;
                count++;
            }
            j--;

        }
          //cout<<"\n End of logic 3 : "<<i<<" "<<j<<endl;
          i--;
          j++;

        // Logic 4 . Go from botoom to top

        while(i>=0)
        {
             if(matrix[i][j]>=101)
            {
                break;
            }
            else
            {
                out.insert(out.end(),matrix[i][j]);
                 cout<<matrix[i][j]<<" ";
                matrix[i][j]=101;
                count++;
            }
            i--;

        }

          //cout<<"\n End of logic 4 :"<<i<<" "<<j<<" "<<count;
          i++;
          j++;


    }
        return out;

    }
};
