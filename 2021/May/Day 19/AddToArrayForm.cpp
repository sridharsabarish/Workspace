// Source :https://leetcode.com/problems/add-to-array-form-of-integer/submissions/
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
    vector<int> k2,r;
        int c,i1,i2,v1,v2,sum;

        while(k)
        {
            k2.insert(k2.begin(),k%10);
            k/=10;
        }


        c =0;
        i1 = size(num)-1; i2 = size(k2)-1;


        while(i1>=0 or i2>=0)
        {
            v1 = i1>=0?num[i1]:0;
            v2 = i2>=0?k2[i2]:0;
            sum = v1+v2+c;
            c = sum/10;
            r.insert(r.begin(),sum%10);
            i1--;i2--;
        }
        if(c)
        {
            r.insert(r.begin(),c);
        }

        return r;

    }
};
