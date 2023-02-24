// Source :https://leetcode.com/problems/find-common-characters/
// Incomplete : needs a bit more reflection
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        map<char,int> m;
        for(auto&i:words[0])
            m[i]+=1;
        
        for(auto&word:words)
        {
            for(auto&j:word)
            {
                
                if(std::find(words[0].begin(),words[0].end(),j)==words[0].end()){m[j]=0;}
                else
                {
               int occ = std::count(word.begin(),word.end(),j);
                if(occ<m[j])
                {
                    m[j]=occ;
                }
                }

            }
        }
        
        for (const auto& elem : m)
{
            cout<<elem.first<<" : "<<elem.second<<endl;
  //elem.first gives you the key (int)
  //elem.second gives you the mapped element (vector)
}
        
      vector<string> out;
        return out;
        
    }
};