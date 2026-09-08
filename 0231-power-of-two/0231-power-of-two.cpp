class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int status = 0;
        if(n>0) status = 1;
        else status = -1;
        int i=0;
        while(!((n>>i)&1)) i++;
        int result = 1<<i;
        if(status*result == n ) return true;
        return false;   
    }
};
