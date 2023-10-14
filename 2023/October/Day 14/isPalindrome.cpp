// Simple Palindrome Check in CPP
class Solution {
public:
    bool isPalindrome(string s) {

      string stripped="";

      for(auto &i:s)
      {
          if(!isalpha(i) && !isdigit(i))continue;
          char c = tolower(i);
          stripped+=c;
      }
        //cout<<"Stripped : "<<stripped;
        // Check if reverse same as fornt
        string copy=stripped;
        reverse(stripped.begin(),stripped.end());
        return copy==stripped;

    }
};