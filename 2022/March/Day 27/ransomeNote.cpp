// Source : https://leetcode.com/problems/ransom-note/submissions/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

    std::map<char,int> m;

    std::map<char,int> r;

    for(auto&i:magazine){m[i]+=1;}
    for(auto &i:ransomNote){r[i]+=1;}

    std::vector<char> key;

    for(std::map<char,int>::iterator it = r.begin(); it != r.end(); ++it)
    {
      key.push_back(it->first);
    }


    std::vector<char> magKey;

    for(std::map<char,int>::iterator it = m.begin(); it != m.end(); ++it)
    {
      magKey.push_back(it->first);
    }


    for(auto&i:key)
        {
        if(std::find(magazine.begin(),magazine.end(),i)==magazine.end())
        {
            return false;
        }
        if(m[i]<r[i]){return false;}

    }
        return true;


    }

};
