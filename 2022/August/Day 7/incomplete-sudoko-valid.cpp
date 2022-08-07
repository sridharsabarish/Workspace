class Solution {
public:


    bool boolCheck(vector<vector<char>>& board,int r, int c)
    {
        set <int> v;

        for(int i=r;i<r+3;r++)
        {
            for(int j=c;j<c+3;j++)
            {
                v.insert(board[0][0]);
                cout<<" Stuck";
            }
            }

                         return size(v)!=9;

    }

    bool isValidSudoku(vector<vector<char>>& board) {
        /*

        Idea :
        Check the rows
        Check the columns.
         or
        Check the squares
        */

        // Checj the first block
        if(boolCheck(board,0,0)){return false;}
        if(boolCheck(board,3,0)){return false;}
        if(boolCheck(board,6,0)){return false;}

        // Checj the second block
        if(boolCheck(board,0,3)){return false;}
        if(boolCheck(board,3,3)){return false;}
        if(boolCheck(board,6,3)){return false;}

        // Checj the third block
        if(boolCheck(board,0,6)){return false;}
        if(boolCheck(board,3,6)){return false;}
        if(boolCheck(board,6,6)){return false;}

        return true;


    }
};
