// https://projecteuler.net/problem=7
//  Find 10001st prime number;
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
    int i=0;
    int j=2;
    int n=10001;
    while(i<n)
    {
        if(prime(j)){i=i+1;
            cout<<"\n"<< i<<" prime :"<<j;
        }

        j=j+1;
    }
    return 0;
}
