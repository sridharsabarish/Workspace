// Source. :https://leetcode.com/problems/fruit-into-baskets/solutions/4142943/simple-approach-sliding-window-please-up-vote/
class Solution{

public:

    int totalFruit(vector<int>& fruits)
    {

        int n = fruits.size();
        int e1=INT_MAX, e2= INT_MAX;
        int cnt1=0, cnt2=0;
        int i=0,j=0;
        int ans=0;

        while(j<n)
        {
            if(cnt1==0 && e2!=fruits[j])
            {
                e1 = fruits[j];
                cnt1++;
            }

            else if(cnt2==0 && e1!=fruits[j])
            {
                e2 = fruits[j];
                cnt2++;
            }

            else if (e1==fruits[j]) cnt1++;
            else if (e2==fruits[j]) cnt2++;

            else
            {
                while(cnt1>0 && cnt2>0)
                {
                    if( e1==fruits[i]) cnt1--;
                    else if (e2==fruits[i]) cnt2--;
                    i++;
                }

                if(cnt1==0 && e2!=fruits[j])
                {
                    e1=fruits[j];
                    cnt1++;
                }

                if(cnt2==0 && e1!=fruits[j])
                {
                    e2=fruits[j];
                    cnt2++;
                }
            }
            j++;
            ans = max(ans,j-i);
        }
        return ans;

    }


};