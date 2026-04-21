class Solution {
public:
    const int MOD = 1e9 + 7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int j = 0;
       while(j < queries.size())
       { 
        int idx = queries[j][0]; 
        while(idx <= queries[j][1])
        {
            nums[idx] = ((1LL * nums[idx] * queries[j][3] ) % MOD);
            idx += queries[j][2];
        }
        j++;
       }
        int ans = nums[0];
        for(int i = 1 ; i < n ; i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};