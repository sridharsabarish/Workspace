#include<iostream>
#include<vector>
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




int main()
{


for(int i=3;i<30;i++)
{
generateFibBottomUp(i);
}
//generateFibBottomUp(5);
//generateFibBottomUp(10);
//generateFibBottomUp(20);
return 0;

}
