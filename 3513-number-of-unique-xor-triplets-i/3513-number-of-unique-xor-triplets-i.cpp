class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        // we find the nearest 2^power of each number given and that becomes the answer
        //but this applies only for the value of n >= 3
        int n = nums.size();
       
        if(n == 1)
        {
            return n; 
        }
        if(n == 2)
        {
            return n;
        }
       

        int ans = 1;
        while(ans <= n)
        {
            ans = ans * 2 ;
        }
        return ans;
    }
};