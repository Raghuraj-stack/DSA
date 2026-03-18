class Solution {
public:
    vector<int> findPeaks(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();
        for(int i = 1 ; i < n-1 ; i++)
        {
            if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            {
                arr.push_back(i);
            }
        }
        return arr;
    }
};