// Source : https://leetcode.com/problems/flipping-an-image/submissions/
/*
Quality : Efficient Space usage. Fast as well.

*/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
     
        vector<int> temp;
        
        for(int i=0;i<size(image);i++)
        {
            temp = image[i];
            reverse(temp.begin(),temp.end());
            for(int j=0;j<size(temp);j++)
            {
                if(temp[j]==0)temp[j]=1;
                else temp[j]=0;
                
            }
            image[i]=temp;
        }
        return image;
    }
};