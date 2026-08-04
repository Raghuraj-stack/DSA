class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ele;
        int n = nums.size();
        int start = nums[0];
        int end = nums[n - 1];
        vector<int> ans;
        for (int i = start; i <= end; i++) {
            ele.push_back(i);
        }
        int n1 = ele.size();
        int n2 = nums.size();
        for (int i = 0; i < n1; i++) {
            auto it = find(nums.begin(), nums.end(), ele[i]);
            if (it == nums.end()) {
             ans.push_back(ele[i]);   
            } 
        }
        return ans;
    }
};