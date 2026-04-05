class Solution {
public:
    bool judgeCircle(string moves) {
        int count = 0;
        int U = 0 , L = 0 , D = 0 , R = 0;
        int n = moves.length();
        for(int i = 0 ; i < n ; i++)
        {
            if(moves[i] == 'U')
            {
               U = U + 1;
            }
            else if(moves[i] == 'D')
            {
                D = D + 1;
            }
            else if(moves[i] == 'L')
            {
                L = L + 1;
            }
            else
            {
                R = R + 1;
            }
        }
        if(L == R && U == D)
        {
            return true;
        }
        return false;
    }
};