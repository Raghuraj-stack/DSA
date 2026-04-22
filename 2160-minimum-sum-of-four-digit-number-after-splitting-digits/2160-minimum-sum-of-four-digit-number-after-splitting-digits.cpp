class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        int temp = num;
        int last;
       while(temp > 0)
       {
            last = temp % 10;
            arr.push_back(last);
            temp = temp / 10;
       }
        sort(arr.begin() , arr.end());
        string new1 , new2;
        for(int i = 0 ; i < arr.size() ; i+=2)
        {   
            new1 += char(arr[i] + '0');
        }
        for(int i = 1 ; i < arr.size(); i+=2)
        {   
            new2 += char(arr[i] + '0');
        }
        int ans = stoi(new1) + stoi(new2);
        return ans;
    }
};