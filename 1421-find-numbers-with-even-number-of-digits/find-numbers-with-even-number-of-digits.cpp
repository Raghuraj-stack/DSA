class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            int num = abs(nums[i]);
            int digits = 0;
           while(num > 0)
           {
            digits++;
            num = num / 10;
           }
           if(digits % 2 == 0)
           {
            count = count + 1;
           }
        }
        return count;
    }
};