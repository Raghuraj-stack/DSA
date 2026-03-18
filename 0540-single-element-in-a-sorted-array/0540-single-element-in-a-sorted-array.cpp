class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    int st = 0; 
    int end = n - 1;
    if(n == 1)
    {
        return nums[0];
    }
    while(st <= end)
    {
        int mid = st + (end - st)/2;
        if(mid == 0 && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if(mid == n - 1 && nums[mid] != nums[mid - 1])
        {
            return nums[mid];
        }
        if(nums[mid  - 1] != nums[mid] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if(mid % 2 == 0)
        {
            if(nums[mid - 1] == nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if(nums[mid - 1] == nums[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }    
    }
    return -1;
    }
};


// int n = nums.size();
//        unordered_map<int , int > mpp;
//        for(int i = 0 ; i < n ; i++)
//        {
//         mpp[nums[i]]++;
//        } 
//        for(auto &it : mpp)
//        {
//         if(it.second == 1)
//         {
//             return it.first;
//         }
//        }
//        return 0;  