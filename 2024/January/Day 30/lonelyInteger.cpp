int lonelyinteger(vector<int> a) {

sort(a.begin(),a.end());
for(int i=0;i<a.size();i++)
{

if(i==0)
{
    if(a[i]!=a[i+1])
    {
        return a[i];
    }
}

else if(i==a.size()-1)
{
    if(a[i]!=a[i-1])
    {
        return a[i];
    }
}

else
{
    if(a[i]!=a[i+1] && a[i]!=a[i-1])
    {
        return a[i];
    }
}
}
return -1;
}
