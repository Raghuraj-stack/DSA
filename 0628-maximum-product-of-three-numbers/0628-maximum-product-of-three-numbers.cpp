class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int pro1 = nums[0] * nums[1] * nums[n-1];
        int pro2 = nums[n-3] * nums[n-2] * nums[n-1];
        if(pro1 > pro2)
        {
            return pro1;
        }
        return pro2;
    }
};