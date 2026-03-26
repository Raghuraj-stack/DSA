class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        int temp = n;
        while(temp > 0)
        {   
            int digi = temp % 10;
            prod = prod * digi;
            sum = sum + digi;
            temp = temp / 10;
        }
        return (prod - sum);
    }
};