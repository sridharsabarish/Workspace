#include<iostream>
#include<vector>
#include<stdlib.h>
#include<map>
#include<time.h>
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
    if(n==1 || n==2)
    {
      return 1;
    }

     return generateFibTopDown(n-1)+generateFibTopDown(n-2);
}


int generateFibTopDownWithMemoization(int n)
{


    if(fib[n]!=NULL)
    {
      return fib[n];

    }

    if(n==1 || n==2)
    {
      fib[n]=1;
      return fib[n];
    }

      fib[n]=generateFibTopDownWithMemoization(n-1)+generateFibTopDownWithMemoization(n-2);
      return fib[n];
    
}




int main()
{

 int ELEMENT_SIZE=20;
 clock_t t1,t2,t3,t4,t0;
fib[1]=1;
fib[2]=1;

t0=clock();
cout<<"Top Down : "<<generateFibTopDown(ELEMENT_SIZE)<<" \n";
t1=clock();
cout<<"Top Down with Memoization : "<<generateFibTopDownWithMemoization(ELEMENT_SIZE)<<" \n";
t2=clock();

for(int i=1;i<=ELEMENT_SIZE;i++)
{
  cout<<fib[i]<<" ";
}
cout<<endl;
t3=clock();
generateFibBottomUp(ELEMENT_SIZE);
t4=clock();
cout<<endl;
cout<<"\n ------------------ Statistics------------------- \n";
cout<<" Time for Top Down(ms) : "<<t1-t0<<endl;
cout<<" Time for Top Down with Memoization(ms) : "<<t2-t1<<endl;
cout<<" Time for Top Down For Loop (ms) : "<<t3-t2<<endl;
cout<<" Time for Bottom up (ms) : "<<t4-t3<<endl;
cout<<"\n ------------------------------------------------- ";
return 0;

}
