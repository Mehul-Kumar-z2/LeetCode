int climbStairs(int n) {
    double phi = (1 + sqrt(5.0)) / 2;
    return (int)round(pow(phi, n+1) / sqrt(5.0));
}