/*
Source : https://leetcode.com/problems/optimal-partition-of-string/submissions/

logic : 

How do we split the strings so that they are unique.

start, check if the next letter exists in current one else keep building string array;
Increase count when encountering a problem;




*/

class Solution {
public:
    int partitionString(string s) {
        
        int count=0;
        int start=0;
        string tmp="";
        while(start<size(s))
        {
            if(std::find(tmp.begin(),tmp.end(),s[start])!=tmp.end())
            {
                //cout<<" Found "<<s[start]<<" in "<<tmp<<endl;
                count++;
                //cout<<" Creating "<<count+1<<" Partition "<<endl;
             
                tmp=s[start];
                
            }
            else
            {
                tmp+=s[start];
                //cout<<"Adding to partition "<< count+1<<" : "<<tmp<<endl;
                
                
            }
            start++;
            
        }
        return count+1;
        
    }
};