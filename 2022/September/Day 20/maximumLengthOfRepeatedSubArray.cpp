/*

Logic :

Take one array and find all the sub arrays.
Using the subArrays array, try to find them in the second number.

    Don't think this is necessary.

Start 1;
End 1;


Start 2;
End 2;



Take one start and find the start 2 in the second array.
    This can be multiple items so we need to do this till end of the second array to be doubly sure.
Increment the end for start 1 and see if it is same with increment of start 2 for second array;
Keep tally of maximum;


*/


class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {

        int start1=0;
        int end1=0;
        int start2=0;
        int end2=0;
        int max=0;
        while(end1<size(nums1))
        {
            while(end2<size(nums2))

            {
                if(nums1[end1]==nums2[end2])
                {
                    cout<<"Came here "<<end2<<" :"<<start2;
                    max = max<(end2-start2+1)?end2-start2+1:max;
                    end1++;
                    end2++;
                }
                else
                {
                   end1++;
                    start2++;
                    end2=start2;

                }


            }
            start1++;
            end1=start1;
        }

        start1=start2=end1=end2=0;
        while(end2<size(nums2))
        {
            while(end1<size(nums1))

            {
                if(nums2[end2]==nums1[end1])
                {
                    cout<<"Came here "<<end2<<" :"<<start2;
                    max = max<(end2-start2+1)?end2-start2+1:max;
                    end1++;
                    end2++;
                }
                else
                {
                    end2++;
                    start1++;
                    end1=start1;

                }


            }
            start2++;
            end2=start2;
        }
        return max;
    }
};
