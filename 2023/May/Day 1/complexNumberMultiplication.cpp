/*

Source : https://leetcode.com/problems/complex-number-multiplication/submissions/

Logic : 
1) Extract the real and complex parts from the string, use a method for that.
2) Multiply real by real, complex by complex for the real part. THen do the remaining for complex part.
3) Return the value.

*/


class Solution {
public:
    int VERBOSE=0;
    
    vector<int> getComponents(string nums1)
    {
        int real=0;
        int complex=0;
        int f=0;
        
        string tmp="";
        for(auto&i:nums1)
        {
            if((i!='+') && (i!='i'))
            {
                tmp+=i;
            }
            else if(i=='+')
            {
                real=stoi(tmp);
                tmp="";
            }
            
            else if(i=='i')
            {
                f=1;
            }
            
            
        }
        
        if(f==1)
        {
            complex=stoi(tmp);
        }
        else
        {
            real=stoi(tmp);
        }
        if(VERBOSE)
        cout<<"Real : "<<real<<" complex : "<<complex<<endl;
        vector<int> out;
        out.insert(out.end(),real);
        out.insert(out.end(),complex);
        return out;
        
    }
    
    string complexNumberMultiply(string num1, string num2) {
        
        vector<int> v1=getComponents(num1);
        vector<int> v2=getComponents(num2);
        
        int real = v1[0]*v2[0] - (v1[1]*v2[1]);
        int complex= v1[0]*v2[1] + (v2[0]*v1[1]);
        string tmp="";
        tmp+=to_string(real)+"+"+to_string(complex)+"i";
        return tmp;
        
        
    }
};