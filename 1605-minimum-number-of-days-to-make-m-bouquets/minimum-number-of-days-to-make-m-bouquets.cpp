class Solution {
public :
    bool isPossible(int minDay , int k , int m , vector<int>& bloomDay , int n)
{
    int s = n;
    int count = 0;
    int total = 0;
    for(int i = 0 ; i < s ; i ++)
    {
        if(bloomDay[i] <= minDay)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if(count == k)
            {
                total++;
                count = 0;
            }
        if(total >= m)
        {
            return true;
        }
    }
    return false;
}
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size())
        {
            return -1;
        }
        int n = bloomDay.size();
        int st = *min_element(bloomDay.begin() , bloomDay.end());
        int end = *max_element(bloomDay.begin() , bloomDay.end());
        int ans = 0;
        while(st <= end)
        {
            int mid = st + (end - st)/2;
            if(isPossible(mid , k , m , bloomDay , n))
            {
                ans = mid ;
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return ans;
    }
};