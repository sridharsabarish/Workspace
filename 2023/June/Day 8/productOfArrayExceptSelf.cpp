/*

Source. : https://leetcode.com/problems/product-of-array-except-self/submissions/
Quality : Good Solution


1 234

12 34
1   

123 456
6   120

1234 56
24  30





*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int VERBOSE=0;
        vector<int> array;
        int lproduct=1;
        int rproduct=1;// Product from nums[1]...nums[n];
        
        for(int i=1;i<size(nums);i++)rproduct*=nums[i];
        
        int temp=1;
        
        for(int i=0;i<size(nums);i++)
        {
            if(VERBOSE)
            cout<<" Left : "<<lproduct<<" Right : "<<rproduct<<endl;
            
            
            if(nums[i]==0)
            {
                rproduct=1;
                    for(int j=i+1;j<size(nums);j++)
                    {
                        rproduct*=nums[j];
                    }
                
            }
            
            temp=lproduct*rproduct;
            
            
            if(i+1<size(nums))
            {
                if(nums[i+1]==0){
                    
                    // Recalculate
                    rproduct=1;
                    for(int j=i+1;j<size(nums);j++)
                    {
                        rproduct*=nums[j];
                    }
                    
                    
                    
                }
                else{rproduct/=nums[i+1];}
            }
            lproduct*=nums[i];
            
            array.insert(array.end(),temp);
        }
        return array;
    }
};