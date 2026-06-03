class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        auto calc = [](vector<int>& a1, vector<int>& d1, vector<int>& a2, vector<int>& d2) {
            int min_end = INT_MAX;
            for (int i = 0; i < a1.size(); i++)
                min_end = min(min_end, a1[i] + d1[i]);
            
            int best = INT_MAX;
            for (int i = 0; i < a2.size(); i++)
                best = min(best, max(a2[i], min_end) + d2[i]);
            
            return best;
        };

        return min(
            calc(landStartTime, landDuration, waterStartTime, waterDuration),
            calc(waterStartTime, waterDuration, landStartTime, landDuration)
        );
    }
};