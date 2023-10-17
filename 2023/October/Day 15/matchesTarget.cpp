

#include <iostream>
#include <vector>
using namespace std;
class Solution {

  public:

  static vector<int> search(const vector<int> &arr, int targetSum) {
    // TODO: Write your code here

    int end=arr.size()-1;
    int start=0;
    
    cout<<" Start is "<<start<<" End is "<<end<<endl;
    while(start<=end)
    {
      if(arr[start]+arr[end]==targetSum)
        {
            cout<<" Values are "<<start<<" "<<end<<endl;
          return vector<int>(start, end);
        }
      else if(arr[start]+arr[end]<targetSum)
      {
        start=start+1;
      }
      else
      {
        end=end-1;
      }
    }
      cout<<" Values are Junk "<<endl;
    return vector<int>(21, -1);
  }

};

int main()
{
    cout<<" this is a test";
Solution s;
vector<int> array;
array.insert(array.end(),1);
array.insert(array.end(),2);
array.insert(array.end(),3);
array.insert(array.end(),4);
array.insert(array.end(),5);
array.insert(array.end(),6);
int target=6;
s.search(array, target);
}