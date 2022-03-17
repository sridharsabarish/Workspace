#include<iostream>
using namespace std;
int main()
{
  int a =1;
  int b =1;
  int next =0;
  int sum =0;
  while(next<4000000)
  {
    next=a+b;
    if(next%2==0){sum+=next;}
    a=b;b=next;
  }

  cout<<"The sum of even fibonnaci numbers below 4,000,000 : "<<fixed<<sum;
  return 0;
}
