// Source :https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/submissions/
class Solution {
public:
    double average(vector<int>& salary) {
        int min = 99999999;
        int max = -9999999;
        for(int i=0;i<size(salary);i++)
        {
            if(salary[i]<min)
            {
                min = salary[i];
            }
            if(salary[i]>max)
            {
                max = salary[i];
            }
        }

        double len =0;
        double sum = 0;
        for(int i=0;i<size(salary);i++)
        {
            if((salary[i]!=min) && (salary[i]!=max))
            {
                sum = sum + salary[i];
                len+=1;
            }
        }

        return sum/len;
    }
};
