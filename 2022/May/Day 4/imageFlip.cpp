// Source : https://leetcode.com/problems/flipping-an-image/submissions/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &i:image)
        {
            reverse(i.begin(),i.end());
        }

        for(int i=0;i<size(image[0]);i++)
        {
            for(int j=0;j<size(image[0]);j++)
            {
                if(image[i][j]==0){image[i][j]=1;}
                else
                {
                    image[i][j]=0;
                }

            }
        }
        return image;
    }
};
