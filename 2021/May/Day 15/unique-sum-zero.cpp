// Source :https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/submissions/
class Solution {
public:
    vector<int> sumZero(int n) {

        vector<int> lists ;

        int zero = n%2==1;

        for(int i=1;i<(n/2)+1;i++)
        {
            lists.insert(lists.end(), 1,-i);
        }

        if(zero)
        {
            lists.insert(lists.end(), 1,0);
        }

         for(int i=1;i<(n/2)+1;i++)
        {
            lists.insert(lists.end(), 1,i);
        }


        return lists;
    }
};
