class Solution {
public:
    string toLowerCase(string s) {
        string newString="";
        for(auto &i:s)
        {
            newString+=tolower(i);
        }
        return newString;
    }
};
