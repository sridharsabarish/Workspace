class Solution {
public:
    bool isAnagram(string s, string t) {

        set <char> a (begin(s), end(s));
        set <char> b (begin(t), end(t));

        for(auto &c:a)
        {
            if(std::count(s.begin(),s.end(),c)!=std::count(t.begin(),t.end(),c))
            {
                return false;
            }
        }
        for(auto &c:b)
        {
            if(std::count(s.begin(),s.end(),c)!=std::count(t.begin(),t.end(),c))
            {
                return false;
            }
        }
        return true;
    }



};
