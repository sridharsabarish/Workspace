// Source : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/
class Solution {
public:


    string get_string(string haystack,int len,int start)
    {
        string temp ="";
        for(int i=start;i<start+len;i++)
        {
            temp+=haystack[i];
        }
        return temp;

    }
    int strStr(string haystack, string needle) {
        if(haystack==needle){return 0;}

        int count=0;
        while(count+size(needle)<=size(haystack))
        {
            //cout<<get_string(haystack,size(needle),count)<<endl;
            if(get_string(haystack,size(needle),count)==needle)
            {
                return count;
            }

            count++;
        }
        return -1;

    }
};
