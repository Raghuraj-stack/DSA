class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max1 = 0;
        for(int i = 0 ; i < arr.size(); i++)
        {
            max1 = 0;
            for(int j = i+1 ; j < arr.size() ; j++)
            {
                max1 = max(max1 , arr[j]);
            }
            arr[i] = max1;
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};