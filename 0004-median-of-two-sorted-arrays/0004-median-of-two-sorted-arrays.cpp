class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged_array = nums1;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;
        for(int i = 0 ; i < n2 ; i++ )
        {
            merged_array.push_back(nums2[i]);
        }
        sort(merged_array.begin() , merged_array.end());
        if(n % 2 == 0)
        {
            double sum = merged_array[(n/2)-1] + merged_array[n/2];
            double median = sum/2;
            return median;
        }
        else
        {
            int median = merged_array[n/2];
            return median;
        }
    }
};