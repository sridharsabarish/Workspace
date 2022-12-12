/* Source : https://leetcode.com/problems/unique-morse-code-words/
   Quality : Good
   Runtime : 0ms, 100% , memory : 8.7 MB 38% less than others.
*/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> v =  {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        set<string> s;

        for(auto&i:words)
        {
            string temp="";
            for(auto&c:i)
            {
                temp+=v[int(c)-97];
            }
            s.insert(temp);

        }
        return size(s);

    }
};
