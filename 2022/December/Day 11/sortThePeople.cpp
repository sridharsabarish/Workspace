// Source : https://leetcode.com/problems/sort-the-people/submissions/
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> m;
        for(int i=0;i<size(heights);i++)
        {
            m[heights[i]]=names[i];
        }

        sort(heights.begin(),heights.end(),greater<int>());

        for(int i=0;i<size(heights);i++)
        {
            names[i]=m[heights[i]];

        }

        return names;


    }
};
