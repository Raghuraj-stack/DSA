class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int sum = INT_MAX;
        for(int i = 0 ; i < n; i++)
        {
            if(words[i] == target)
            {
                int diff = abs(i - startIndex);
                sum = min(sum , min(diff , n - diff));
            }
        }
        if(sum == INT_MAX)
        {
            return -1;
        }
        return sum;
    }
};