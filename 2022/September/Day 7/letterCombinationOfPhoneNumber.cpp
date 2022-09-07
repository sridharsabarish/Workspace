/* Source : https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/
    Solution Quality : Good; 3ms, 6.9MB
    Things that can be improved : population of the map can be automated.


*/
class Solution {
public:

     vector<string> addToVec(map<char,vector<char>> m, char letter,vector<string> s)
        {
            vector<string> out;



            // Go through each of the existing string;
            // add a combination based on the current letter to the vector<string>;
            // Return the string;

                for(auto &i:s)
                {

                    for(auto&j:m[letter])
                    {
                        string tmp = i;
                        tmp+=j;
                        out.insert(out.end(),tmp);
                    }

                }

            return out;

        }
    vector<string> letterCombinations(string digits) {
        map<char,vector<char>> m;
        m['2'] = {'a','b','c'};
        m['3'] = {'d','e','f'};
        m['4'] = {'g','h','i'};
        m['5'] = {'j','k','l'};
        m['6'] = {'m','n','o'};
        m['7'] = {'p','q','r','s'};
        m['8'] = {'t','u','v'};
        m['9'] = {'w','x','y','z'};

        // If we start out empty then we populate the string with values from the first letter;
        vector<string> s;

        for(auto&i:m[digits[0]])
        {
            string tmp ="";
            tmp+=i;
            s.insert(s.begin(),tmp);
        }

        // For the rest we can follow an iterative process of adding and expanding the strings.

        for(int i=1;i<size(digits);i++)
        {

            s = addToVec(m,digits[i],s);

        }

        return s;

    }
};
