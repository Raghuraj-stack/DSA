class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int min1 = INT_MAX;
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] == target)
            {
                int temp = abs(i - start);
                min1 = min(min1 , temp);
            }
        }
        return min1;
    }
};