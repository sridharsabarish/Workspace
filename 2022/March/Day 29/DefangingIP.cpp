// Source : https://leetcode.com/problems/defanging-an-ip-address/
class Solution {
public:
    string defangIPaddr(string address) {
        string out ="";
        for(auto&i:address)
        {
            if(i!='.'){out+=i;}
            else{out+="[.]";}
        }
        return out;
    }
};

/*  ALTERNATEIVELY
// Source : https://leetcode.com/problems/defanging-an-ip-address/
class Solution {
public:
    string defangIPaddr(string address) {
        address = std::regex_replace(address, std::regex("\\."), "[.]");
        return address;
    }
};

*/
