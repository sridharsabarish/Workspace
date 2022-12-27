// Source :https://leetcode.com/problems/percentage-of-letter-in-string/submissions/ 
class Solution {
public:
    int percentageLetter(string s, char letter) {
        return round(100*std::count(s.begin(),s.end(),letter)/size(s));
    }
};