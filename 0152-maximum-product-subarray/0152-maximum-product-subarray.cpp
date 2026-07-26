class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // id all elements in the array are positive then the ans is the whole array but if there is a single 0 in the array then we have to split the array into multiple arrays and then take the max of all the multiple array and then find the ans

        int pref = 1  , suff = 1;
        int ans = INT_MIN;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            if(pref == 0) pref = 1;
            if(suff == 0) suff = 1;
            pref = pref * nums[i];
            suff = suff * nums[n - i - 1];
            ans = max(ans , max(pref , suff));
        }
        return ans;
    }
};