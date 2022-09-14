// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int prev=nums[0];
        int cont=0;
        int toRemove=0;
        for(int i=0;i<size(nums);i++)
        {
            if(i==0){continue;}


            if(nums[i]==prev)
            {
                cont++;
            }
            else
            {
                cont=0;

            }
            //cout<<nums[i]<<" "<<cont<<endl;
            prev=nums[i];
            if(cont>1)
            {
                //cout<<"making "<<nums[i]<<" as "<<INT_MAX<<endl;
                nums[i]=INT_MAX;
                toRemove++;

            }

        }

        sort(nums.begin(),nums.end());

        //cout<<" Final size is "<<size(nums)-toRemove;

        //for(auto&i:nums){cout<<i<<" ";}
        return size(nums)-toRemove;
    }
};
