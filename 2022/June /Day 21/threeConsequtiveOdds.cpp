// Source : https://leetcode.com/problems/three-consecutive-odds/submissions/
class Solution {
public:
        bool isOdd(int n1,int n2,int n3)
        {
            return n1%2==1 && n2%2==1 && n3%2==1;
        }
    bool threeConsecutiveOdds(vector<int>& arr) {

        if(size(arr)<3){return false;}

        for(int i=0;i<size(arr)-2;i++)
        {
            if(isOdd(arr[i],arr[i+1],arr[i+2])){return true;}
        }
        return false;
    }
};
