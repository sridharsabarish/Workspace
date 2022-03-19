// Source : https://projecteuler.net/problem=9
#include <iostream>

using namespace std;

int main()
{
        for(int i=1;i<997;i++)
        {
            for(int j=2;j<998;j++)
            {
                for(int k=3;k<999;k++)
                {
                    if((i+j+k==1000)&&(i*i+j*j==k*k))
                    {
                        cout<<i<<" "<<j<<" "<<k<<"\n ";
                        cout<<i*j*k;
                        return 0;
                    }
                }
            }
        }
        return 0;
}
