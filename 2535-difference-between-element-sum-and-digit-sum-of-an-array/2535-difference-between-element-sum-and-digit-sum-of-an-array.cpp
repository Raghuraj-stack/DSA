class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digi = 0;
        int sum = 0;
        int temp;
        int last;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum = sum + nums[i];
                temp = nums[i];
                while(temp > 0)
                {
                    last = temp % 10;
                    digi = digi + last;
                    temp = temp / 10;
                }
        }
        return abs(sum - digi);
    }
};