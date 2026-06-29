class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        bitset<32> xbits(x);
        bitset<32> ybits(y);
        for(int i = 0 ; i < 32 ; i++)
        {
            if(xbits[i] != ybits[i])
            {
                count++;
            }
            
        }
        return count;
    }
};