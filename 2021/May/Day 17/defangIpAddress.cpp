// Source :https://leetcode.com/problems/defanging-an-ip-address/submissions/
class Solution {
public:
    string defangIPaddr(string address) {
        string n ="";
        for(auto &i:address)
        {
            if(i=='.')
            {
                n+="[.]";
            }
            else
            {
                n+=i;
            }

        }
        return n;
    }
};
