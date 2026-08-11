class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefixArr = height;
        vector<int> suffixArr = height;
        int total = 0;
        int n = height.size();
        int leftMax ;
        int rightMax;
        for(int i = 1 ; i < n ; i++)
        {
            if(prefixArr[i] < prefixArr[i - 1])
            {
                prefixArr[i] = prefixArr[i - 1];
            }
        }

        for(int i = n - 2 ; i >= 0; i--)
        {
            if(suffixArr[i] < suffixArr[i + 1])
            {
                suffixArr[i] = suffixArr[i + 1];
            }
        }

        for(int i = 0 ; i < n ; i++)
        {
            leftMax = prefixArr[i];
            rightMax = suffixArr[i];
            if(height[i] < leftMax && height[i] < rightMax)
            {
                total = total + min(leftMax , rightMax) - height[i];
            }
        }
        return total;
    }
};


