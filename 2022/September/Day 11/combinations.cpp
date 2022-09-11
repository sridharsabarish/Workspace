// Source. : https://leetcode.com/problems/combinations/discuss/2517061/My-solution
// Not this is not my work. This is used for learning how combinations work. All works is credited to the link above.
// Could be good to revisit this.


class Solution {
public:
	void add_v(int i, int n, int k, vector<int>& v, vector<vector<int>>& outv, int count){
		for(int j = i; j <= n; j ++){

            // WE add on the back of the array and keep track of the count
            v[count - 1] = j;
            // If count is lets say same as number of choices, then we push it back to the output vector;
			if(count == k) outv.push_back(v);
			else add_v(j + 1, n, k, v, outv, count + 1); // This like recursion so it will take care of what is needed.


		}
	}
	vector<vector<int>> combine(int n, int k) {


        // Some vectors for temp and out
		vector<int> v;
		vector<vector<int>> out;
        // We go through the process of populating the temp vector
		for(int i = 0; i < k; i ++) v.insert(v.end(),0);
        // We try to recurse?
		add_v(1, n, k, v, outv, 1);
		return outv;
	}
};
