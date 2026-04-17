class Solution {
public:
    int reverseNum(int x) {
        int rev = 0;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;  
        int ans = INT_MAX;

        for (int j = 0; j < nums.size(); j++) {
            if (mp.find(nums[j]) != mp.end()) {
                ans = min(ans, j - mp[nums[j]]);
            }

            mp[reverseNum(nums[j])] = j;
        }

        if(ans == INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};