//source : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/
class Solution {
public:
    int numberOfSteps(int num) {
        int step =0;
        while(num)
        {
            num=num%2?num-1:num/2;
            step++;
        }
        return step;
    }
};
