// Source  : https://leetcode.com/problems/maximum-69-number/submissions/
class Solution {
public:
    int maximum69Number (int num) {
      vector<int> arr;
        while(num)
      {
            arr.insert(arr.begin(),num%10);
            num/=10;
      }

        int f=0;
        for(int i=0;i<size(arr);i++)
        {
            if(arr[i]==6)
            {
                f=1;
                arr[i]=9;
                break;
            }

        }

        int out=0;
        for(int i=0;i<size(arr);i++)
        {
            out+=pow(10,size(arr)-i-1)*arr[i];
        }
        return out;
    }
};
