// Source : https://leetcode.com/problems/rings-and-rods/submissions/
class Solution {
public:
    int countPoints(string rings) {

        int count=0;
        map<int,string> m;
        for(int i=1;i<size(rings);i+=2)
        {
            m[int(rings[i])-48]+=rings[i-1];
        }

        for(int i=0;i<10;i++)
        {
           string str = m[i];
           if(size(str)<3){continue;}
           if((str.find('G') != std::string::npos) && (str.find('R') != std::string::npos) && (str.find('B') != std::string::npos))
           {
               count+=1;
           }
        }
        return count;
    }
};
