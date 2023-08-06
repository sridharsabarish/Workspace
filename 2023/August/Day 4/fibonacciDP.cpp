#include<iostream>
#include<vector>
#include<stdlib.h>
#include<map>
using namespace std;


void generateFibBottomUp(int n)
{

cout<<" Till "<<n<<" : ";
vector<int> m;

m.insert(m.end(),0);
m.insert(m.end(),1);

cout<<m[0]<<" "<<m[1]<<" ";

for(int i=2;i<=n;i++)
{

  m.insert(m.end(),m[i-1]+m[i-2]);
  cout<<m[i]<<" ";
}
cout<<endl;
}


/*
To do : Generate Fibonacci using Top Down Approach, with and without memoization;
Need to refine it to store it somewhere and print.
*/


map<int,int> fib; //

int generateFibTopDown(int n)
{


    if(fib[n]!=NULL)
    {
      return fib[n];

    }

      fib[n]=generateFibTopDown(n-1)+generateFibTopDown(n-2);
      return 0;
    
}




int main()
{

fib[1]=1;
fib[2]=1;
// for(int i=3;i<30;i++)
// {
// generateFibBottomUp(i);
// }
cout<<generateFibTopDown(10)<<" \n";

for(int i=1;i<n;i++)
{
  cout<<fib[i]<<" ";
}
cout<<endl;
generateFibBottomUp(15);
//generateFibBottomUp(20);
return 0;

}
