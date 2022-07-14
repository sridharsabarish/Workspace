// Source : https://leetcode.com/problems/fizz-buzz/submissions/
class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> v;
        for(int i=1;i<=n;i++)
        {string t="";
        if(i%3==0)t+="Fizz";
        if(i%5==0)t+="Buzz";
        if(t==""){t=to_string(i);}
        v.insert(v.end(),t);
        }
         return v;
    }
};
