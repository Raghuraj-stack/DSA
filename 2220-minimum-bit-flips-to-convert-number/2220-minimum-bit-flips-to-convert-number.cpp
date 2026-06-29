class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32> startBit(start);
        bitset<32> goalBit(goal);
        int count = 0;
        for(int i = 0 ; i < 32 ; i++)
        {
            if(startBit[i] != goalBit[i])
            {
                count++;
            }
        }
        return count;
    }
};