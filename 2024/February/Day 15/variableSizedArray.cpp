 // Source : https://www.hackerrank.com/challenges/variable-sized-arrays/problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 
    
    int n,q;
    cin>>n>>q;
    //cout<<" n :"<<n<<" q :" <<q;
    int arr[n];
    vector<vector<int>> total;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        int temp;
        vector<int> v;
        for(int j=0;j<arr[i];j++)
        {
            cin>>temp;
            v.insert(v.end(),temp);
            
        }
        
        total.insert(total.end(),v);
        
    }
    //cout<<" came here";
    
    int ele;int index;
    for(int i=0;i<q;i++)
    {
        cin>>ele;
        cin>>index;
        cout<<total[ele][index]<<endl;
        
    }
       return 0;
    
}