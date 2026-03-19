class Solution {
public:
    int isPossible(vector<int>& nums, int divisor) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] + divisor - 1) / divisor; 
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int st = 1;
        int end = *max_element(nums.begin(), nums.end());

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (isPossible(nums, mid) <= threshold) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};