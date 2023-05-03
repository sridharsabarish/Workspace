// Source : https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/submissions/
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
    
    if(num%3!=0){return {};}
    vector<long long>out;
    long long start= (num/3)-1;
  
        out.insert(out.end(),start);
        out.insert(out.end(),start+1);
        out.insert(out.end(),start+2);
        return out;
    }
};