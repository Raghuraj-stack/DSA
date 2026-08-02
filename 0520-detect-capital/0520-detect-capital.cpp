class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        int lower = 0;
        int upper = 0;
        for(char ch: word)
        {
            if(ch >= 'A' && ch <= 'Z')
            {
                upper++;
            }
            else
            {
                lower++;
            }
        }

        if(n == upper)
        {
            return true;
        }

        if(n == lower)
        {
            return true;
        }


        if(word[0] >= 'A' && word[0] <= 'Z' && upper == 1)
        {
            return true;
        }

    return false;
    }
};