// Source : https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/
class Solution {
public:

    bool isVowel(char a)
    {
        a = tolower(a);

        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
        {
            return true;
        }
        return false;

    }

    string reverseVowels(string s) {
        string t ="";

        for(auto&a:s)
        {
            if(isVowel(a))
            {
                t+=a;
            }

        }

        reverse(t.begin(),t.end());


        int count=0;
        for(int i=0;i<size(s);i++)
        {
            if(isVowel(s[i]))
            {
                s[i]=t[count++];
            }

        }

        return s;
    }
};
