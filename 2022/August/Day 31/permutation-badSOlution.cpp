/*How is Combination Made?

See the set and try to rotate them one place till N times and give that as output to another array;

How is permutation made?

Take an array and insert it in any place


Solutio Quality : Cheap STL usage. Doesn't do it from first principles.


*/
class Solution {
public:


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
    do{
        ans.push_back(nums);
    }while(next_permutation(nums.begin(), nums.end()));

    return ans;




    }
};
