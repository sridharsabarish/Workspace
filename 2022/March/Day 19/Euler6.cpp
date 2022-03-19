// https://projecteuler.net/problem=6
//  square of sum of first 100 natural numbers -Sum of First 100 natural numbers's square;

#include <iostream>

using namespace std;

int main()
{
    int n=100;
    int sum = (n*(n+1)/2)*(n*(n+1)/2);
    for(int i=1;i<=n;i++)
    {
        sum-=(i*i);
    }
    cout<<" Difference is "<<sum;

    return 0;
}
