class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int max1 = nums[0];
        int index;
        for(int i = 0 ; i < n ; i++)
        {
            if(max1 < nums[i])
            {
                max1 = nums[i];
                index = i;
            }
        }
        int i;
        for( i = 0 ; i < n ; i++)
        {
            if(i == index)
            {
                continue;
            }
            if(max1 >= nums[i] * 2)
            {
                continue;
            }
            else
            {
            return -1;
            }
        }
    return index;
    }
};