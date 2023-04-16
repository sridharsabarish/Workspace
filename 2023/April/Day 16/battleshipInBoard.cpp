//Check Horizonatl and check vertical.
// Stuck
// SOurce : https://leetcode.com/problems/battleships-in-a-board/

class Solution {
public:
    
    int checkVertical(vector<vector<char>> &board, int i,int j)
    {
        int counter=i;
        int f=0;
        while((++counter<size(board)) && (board[counter][j]=='X'))
        {
            cout<<" found V : "<<counter<<", "<<j<<endl;
            board[counter][j]='.';
           
            f=1;
        }
        return f;  
    }
    
    int checkHorizontal(vector<vector<char>> &board, int i,int j)
    {
        int counter=j;
        int f=0;
        while((++counter<size(board[0])) && (board[i][counter]=='X'))
        {
             cout<<" found H : "<< i<<", "<<counter<<endl;
            board[i][counter]='.';
            
            f=1;
        }
        return f;  
    }
    
    
    
    
    int countBattleships(vector<vector<char>> &board) {
        
        int count=0;
        
        for(int i=0;i<size(board);i++)
        {
            for(int j=0;j<size(board[0]);j++)
            {
                
                count+=checkHorizontal(board,i,j);
                count+=checkVertical(board,i,j);    
            }
         }
        
            for(int i=0;i<size(board);i++)
            for(int j=0;j<size(board[0]);j++)
            {
                if(board[i][j]=='X')
                {
                    count++;
                }
            }
        return count;
        
        
    }
};