class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int k = n * n;
        vector<int> nums;
        for(int i = 1 ; i <= k ; i++)
        {
            nums.push_back(i);
        }

        vector<vector<int>> matrix(n , vector<int>(n , 0));
        int layers = (n + 1) / 2;
        int s = 0;
        for(int layer = 0 ; layer < layers ; layer++)
        {   
            int top = layer ;
            int bottom = n - layer - 1;
            int left = layer ;
            int right = n - layer - 1;

            for(int i = left ; i <= right ; i++)
            {
               matrix[top][i] = nums[s++];
            }
            for(int i = top + 1; i <= bottom ; i++ )
            {
               matrix[i][right]=nums[s++];
            }
            if(top < bottom)
            {
                for(int i = right - 1; i >= left;i-- )
                {
                matrix[bottom][i] = nums[s++];
                }
            }
            if(left < right)
            {
                for(int i = bottom - 1; i >= top + 1 ; i--)
                {
                matrix[i][top] = nums[s++];
                }
            }
        }
        return matrix;
    }
};