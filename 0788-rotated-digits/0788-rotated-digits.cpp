class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        int sum = 0;
        int valid = 0;
      for(int i = 1 ; i <= n ; i++)
      {
        string s = to_string(i);
        for(int j = 0 ; j < s.length() ; j++)
        {
            if(s[j] == '3' || s[j] == '4' || s[j] == '7')
            {
                sum++;
            }
            else if(s[j] == '2' || s[j] == '5' || s[j] == '6' || s[j] == '9')
            {
                valid++;
            }
        }
        if(sum == 0 && valid > 0)
        {
            count++;
        }
        sum = 0;
        valid = 0;
      }  
      return count;
    }
};