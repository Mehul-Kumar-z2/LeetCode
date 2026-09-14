class Solution {
public:
    int fib(int n) {
        double phi = (sqrt(5) + 1)/2;
        int f = round(pow(phi, n)/sqrt(5));
        return f;
    }
};