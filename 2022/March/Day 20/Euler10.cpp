
// Sum of primes below 2000000
#include <iostream>

using namespace std;
bool prime(int n)
{
    int count=0;
    for(int k=2;k<n;k++)
    {
        if(n%k==0){
            //cout<<n<<":"<<k<<"  ";
            count++;}
        if(count>0){return false;}
    }
    return true;

}

int main()
{
    cout<<"Hello World";

    long sum =0;
    for(int i=2;i<2000000;i++)
    {
        if(prime(i))
        {
            cout<<"\n Number : "<<i<<" Running sum : "<<sum;
            sum+=i;
        }

    }




    return 0;
}
