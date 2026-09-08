class Solution {
public:

    int Intpow(int a, int b){
        return static_cast<int>(pow(static_cast<double>(a), static_cast<double>(b)));
    }

    int countCommas(int n) {
        int s=0;
        int a=n/1000;
        while(a>0){
            s++;
            a/=1000;
        }
        if(s==0){
            return 0;
        }
        int factor = static_cast<int>(pow(1000.0,static_cast<double>(s)));
        int commas = (n - factor + 1);
        s--;
        int sum = 0;
        while(s>0){
            int add = add+ 998*(Intpow(1000, s));
            int y = s-1;
            while(y>0){
                add = add + 999*(Intpow(1000, y));
                y--;
            }
            sum = sum + add;
            s--;
        }
        return sum + commas;
    }
};