class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        int last;
        vector<int> arr;
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            int temp = nums[i];
            while(temp > 0)
            {
                last = temp % 10;
                arr.push_back(last);
                temp = temp / 10;
            }
        }
        reverse(arr.begin() , arr.end());
        return arr;
    }
};