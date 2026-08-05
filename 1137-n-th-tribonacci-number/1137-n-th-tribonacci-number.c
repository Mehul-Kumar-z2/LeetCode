int MEMO[38]={0};
int tribonacci(int n) {
    if(n==0) return 0;
    if(n==1){
        MEMO[n]=1;
        return 1;
    }
    if(n==2){
        MEMO[n]=1;
        return 1;
    }
    if(MEMO[n]) return MEMO[n];
    MEMO[n] =  tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    return MEMO[n];
}