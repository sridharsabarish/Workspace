// Source : https://leetcode.com/problems/removing-stars-from-a-string/submissions/
// Think of a stack maybe?
// Top element removed if current element is *
class Solution {
public:
    string removeStars(string s) {
        stack<char> s1;
        
        for(auto&i:s)
        {
            if(i!='*')
            s1.push(i);
            else
            s1.pop();
        }
        
        string out="";
        while(!s1.empty())
        {
            out+=s1.top();
            s1.pop();
        }
        reverse(out.begin(),out.end());
        return out;
        
        
    }
};