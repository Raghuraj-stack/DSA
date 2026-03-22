class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for(int i = 0 ; i < sentences.size() ; i++)
        {
            int words = 1;
            for(int j = 0 ; j < sentences[i].size(); j++)
            {
                if(sentences[i][j] == ' ')
                {
                    words++;
                }
            }
            maxi = max(maxi , words);
        }
        return maxi;
    }
};