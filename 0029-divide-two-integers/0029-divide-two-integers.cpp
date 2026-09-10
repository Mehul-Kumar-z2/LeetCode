class Solution {
public:
    int divide(int dividend, int divisor) {

        long long a = dividend;
        long long b = divisor;

        bool negative = (a < 0) != (b < 0);

        a = abs(a);
        b = abs(b);

        long long ans = 0;

        while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            ans += multiple;
        }

        if (negative)
            ans = -ans;

        if (ans > INT_MAX)
            return INT_MAX;

        if (ans < INT_MIN)
            return INT_MIN;

        return (int)ans;
    }
};