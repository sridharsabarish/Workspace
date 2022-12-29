// Source:https://leetcode.com/problems/robot-return-to-origin/submissions/
class Solution {
public:
    struct coordinates
        {
        int x;
        int y;
            
        };
    bool judgeCircle(string moves) {
        
        
        coordinates c={0,0};
        for(auto&move:moves)
        {switch(move)
        {
            case 'U': c.y+=1;break;
            case 'D': c.y-=1; break;
            case 'L': c.x-=1;break;
            case 'R': c.x+=1;break;
        }
        }
        
        if(c.x==0 && c.y==0){return true;}
        
        
        return false;
    }
};