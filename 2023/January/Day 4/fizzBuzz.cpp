class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> out;
        for(int i=1;i<=n;i++)
        {
           string temp="";
           if(i%3==0)temp+="Fizz";
           if(i%5==0)temp+="Buzz";
           if(temp=="")
           {
               temp = to_string(i);
           }
            
            out.insert(out.end(),temp);
        }
        return out;
    }
};