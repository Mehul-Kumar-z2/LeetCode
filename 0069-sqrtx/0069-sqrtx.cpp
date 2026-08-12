class Solution {
public:
    int mySqrt(int x) {
        long y = x;
        long n=2;
        while(y>n){
            y=y/2;
            n+=n;
        }
        while((y*y)<x){
            y+=1;
        }
        while((y*y)>x){
            y-=1;
        }
        return y;
    }
};