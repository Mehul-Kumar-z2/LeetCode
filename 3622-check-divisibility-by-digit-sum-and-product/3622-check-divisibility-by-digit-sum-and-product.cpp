class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int x = n;
        while(x>0){
            int temp = x%10;
            sum += temp;
            product *= temp;
            x /= 10;
        }
        if (n%(sum + product)==0) return true;
        return false;
    }
};