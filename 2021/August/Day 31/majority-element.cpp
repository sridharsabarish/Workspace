class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int cutoff = size(nums)/2;

        set<int> s;

    // Traverse the Vector
    for (int x : nums) {

        // Insert each element
        // into the Set
        s.insert(x);
    }

        for(auto &i:s){int val = std::count(nums.begin(),nums.end(),i); if (val>cutoff)return i;}
        return 0;

    }
};
