/*

How to allocate space : 

* 1,1 -> 1,n-i+1
* 1,2 -> 2,n;
* 1,n -> n,n
* 2,1 -> 1,2
* 2,3 -> 3,2
* n,1 -> j,(n-i)+1
* i,j -> j-i +1,(n-i)+1


*/





class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     vector<int> newArr;
     for(int i=size(matrix)-1;i>=0;i--)
     {
         for(int j=size(matrix[0])-1;j>=0;j--)
         {
             
             int index = (j * size(matrix)) + i;
             cout<<matrix[index]<<" ";
             
         }
     }
        
    }
};