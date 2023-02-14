// Source : https://leetcode.com/problems/encode-and-decode-tinyurl/submissions/
class Solution {
public:
    
    map<string,string> m;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        // Generate random string
        
        static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
        
        int stringLength = sizeof(alphanum) - 1;
        
        string tmp="";
        for(int i=0;i<5;i++)
            tmp+=alphanum[rand() % stringLength];

        
        
        m[tmp]=longUrl;
        return tmp;
        
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));