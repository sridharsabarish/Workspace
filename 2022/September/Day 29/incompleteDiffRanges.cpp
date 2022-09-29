/*

Logic : Create an array of differences;
Sort the array to positive and negative;

// Create two arrays one for negative absoulte and one for positive absolutes;
// Do something like a merge sort for final one.
Choose the first k values;
*/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        vector<int> diff;
        for(auto&i:arr)
        {

            diff.insert(diff.end(),i-x);
        }

       vector<int> neg;
       vector<int> pos;

        for(auto&i:diff)
        {
            if(i<0)
            {
                neg.insert(neg.end(),-i);
            }
            else if(i>=0)
            {
                pos.insert(pos.end(),i);
            }
        }

        // Sort these two absolutes;
        sort(neg.begin(),neg.end());
        sort(pos.begin(),pos.end());

        // Once we have it now the final becomes something which checks the difference;

        int prev=0;

        int counter1=0;
        int counter2=0;
        int count=0;

        vector<int> out;
        while(count<k)
        {
            // if(counter2>=size(pos)-1)
            // {
            //     out.insert(out.end(),x-neg[counter1++]);
            // }
            // else if(counter1>=size(neg)-1)
            // {
            //     out.insert(out.end(),x+pos[counter2++]);
            // }
            if(neg[counter1]<=pos[counter2])
            {
                out.insert(out.end(),x-neg[counter1++]);
            }
            else
            {
                out.insert(out.end(),x+pos[counter2++]);
            }
            count+=1;
        }
        sort(out.begin(),out.end());
        return out;
    }
};
