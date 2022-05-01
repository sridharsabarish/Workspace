// Source : https://leetcode.com/problems/excel-sheet-column-number/submissions/
class Solution {
public:
    int titleToNumber(string columnTitle) {

        int sum=0;
        for(int i=0;i<size(columnTitle);i++)
        {

            sum+=pow(26,size(columnTitle)-1-i)*(int(columnTitle[i])-64);
        }
        return sum;


    }
};
