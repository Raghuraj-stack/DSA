class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int count = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {   
            unordered_map<char , int> mpp;

            for(int j = i; j < s.length() ; j++)
            {
            mpp[s[j]]++;

            if(mpp[s[j]] >= k)
            {
                count = count + (s.length() - j);
                break;
            }
            }
        }
        return count;
    }
};