// Source : https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/submissions/
class Solution {
public:
    int getSum(string s)
    {
        int sum=0;
        int ctr=0;
        for(int i=size(s)-1;i>=0;i--)
        {
           sum+=pow(10,ctr++)*(int(s[i])-97);
            
        }
        cout<<" Word : "<<s<<" Sum : "<<sum<<endl;
        return sum;
        
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        return getSum(firstWord)+getSum(secondWord)==getSum(targetWord);
    }
};