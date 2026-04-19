class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int max1 = INT_MIN;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(i < j && nums[i] < nums[j])
                {
                    max1 = max(max1 , nums[j] - nums[i]);
                }
            }
        }
        if(max1 == INT_MIN)
        {
            return -1;
        }
        return max1;
    }
};