//Source : https://projecteuler.net/problem=4
#include <iostream>

using namespace std;

bool palindrome(int i,int j)
{
    int num = i*j;
    int digit; int rev=0;
    int n=num;
    do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     return n==rev;
}
int main()
{
    int max =0;
    for(int i=999;i>99;i--){for(int j=999;j>99;j--)
        {
            if(palindrome(i,j))
            {
               max = max<i*j?i*j:max;
            }
        }

    }
      cout<<"Max is "<<max;


    return 0;
}
