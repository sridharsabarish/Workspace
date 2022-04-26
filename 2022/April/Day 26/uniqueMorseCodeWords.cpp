// Source : https://leetcode.com/problems/unique-morse-code-words/submissions/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

     string a[]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        map<string,int> m;

        for(auto&i:words)
        {
            string temp="";
            for(auto&j:i)
            {
             temp+=a[int(j)-97];
            }
            m[temp]+=1;
        }
        return size(m);
    }
};
