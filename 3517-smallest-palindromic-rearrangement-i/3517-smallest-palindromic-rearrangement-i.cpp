class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq( 26 , 0);

        for(char ch : s)
            freq[ch - 'a']++;

        int n = s.length();
        string ans(n , ' ');

        int left = 0 ;
        int right = n - 1;

        for(int i = 0 ; i < 26 ; i++)
        {
            while(freq[i] >= 2)
            {
                ans[left] = char(i + 'a');
                ans[right] = char(i + 'a');

                left++;
                right--;
                freq[i] -= 2;
            }
        } 

        for(int i = 0 ; i < 26 ; i++)
        {
            while(freq[i] == 1)
            {
                ans[left] = char(i + 'a');
                break;
            }
        }

        return ans;
    }
};