// Source : https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/
// Status : Works but has potential to be drastically improved!
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;

            for(auto&i:nums2)
            {
                if(std::find(nums1.begin(),nums1.end(),i)!=nums1.end())
                {

                    int count2=std::count(nums2.begin(),nums2.end(),i);
                    int min = std::count(nums1.begin(),nums1.end(),i);;
                    if(count2<min){min=count2;}

                    if(std::find(out.begin(),out.end(),i)!=out.end()){continue;}
                    for(int j=0;j<min;j++)
                    {
                        out.insert(out.end(),i);
                    }
                }
            }
        return out;
    }
};
