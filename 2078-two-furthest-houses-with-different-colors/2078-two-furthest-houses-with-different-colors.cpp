class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max1 = 0;
        for(int i = 0 ; i < colors.size() ; i++)
        {
            for(int j = 0 ; j < colors.size(); j++)
            {
                if(colors[i] != colors[j])
                {
                    max1 = max(max1 , abs(j - i));
                }
            }
        }
        return max1;
    }
};