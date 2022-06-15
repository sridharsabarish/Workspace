// Source : https://leetcode.com/problems/robot-return-to-origin/submissions/
class Solution {
public:
    bool judgeCircle(string moves) {
      int x=0;
        int y=0;

        for(auto&i:moves)
        {
            switch(i)
            {
                case 'U':
                    y+=1;break;
                case 'D':
                    y-=1;break;
                case 'L':
                    x-=1;break;
                case 'R':
                    x+=1;break;

            }

        }

        return x==0 && y==0;
    }
};
