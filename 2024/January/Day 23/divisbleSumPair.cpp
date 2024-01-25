int divisibleSumPairs(int n, int k, vector<int> ar) {

int count=0;
for(int i=0;i<ar.size();i++)
for(int j=i+1;j<ar.size();j++)
{
    if((ar[i]+ar[j])%k==0)
    {
        count++;
    }
}
return count;
}