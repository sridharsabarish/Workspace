// Source : https://leetcode.com/problems/height-checker/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sortedHeights = heights;
        sort(sortedHeights.begin(),sortedHeights.end());
        
        int count=0;
        for(int i=0;i<size(heights);i++)
        {
            if(heights[i]!=sortedHeights[i])
            {
                count++;
            }
        }
        return count;
    }
};