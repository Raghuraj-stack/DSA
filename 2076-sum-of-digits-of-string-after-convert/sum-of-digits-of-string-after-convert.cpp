class Solution {
public:
    int getLucky(string s, int k) {
        string nums = "";

        for (char ch : s) {
            nums += to_string(ch - 'a' + 1);
        }

        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum = 0;
            for (char digit : nums) {
                sum += digit - '0';
            }
            nums = to_string(sum);
        }
        return sum;
    }
};