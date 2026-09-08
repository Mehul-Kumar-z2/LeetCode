class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int i=0;
        while(!((n>>i)&1)) i++;
        if((1<<i) == n ) return true;
        return false;   
    }
};
