// Source : https://practice.geeksforgeeks.org/problems/print-the-pattern-set-1/1

#include <iostream>

using namespace std;

void printPattern(int n)

{
    int count =n;


    for(int k=n;k>=0;k--)
    {
        int count2=n;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<count2;
        }
        count2--;
    }
    cout<<endl;
    }
}

int main()
{
   printPattern(5);

    return 0;
}
