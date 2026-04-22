class Solution {
public:
    int alternateDigitSum(int n) {
        int temp = n;
        int sum = 0;
        int neg = 0;
        int last;
        int count = 0;
        while(temp > 0)
        {
            last = temp % 10;
            if(count % 2 == 0)
            {
            sum = sum + last;
            }
            else
            {
                neg = neg + last;
            }
            temp = temp / 10;
            count++;
        }
        if(count % 2 == 0)
        {
            return neg - sum;
        }
        return sum - neg;
    }
};