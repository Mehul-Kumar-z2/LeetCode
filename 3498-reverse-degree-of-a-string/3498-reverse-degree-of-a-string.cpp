class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int i = 1;
        for(char c : s){
            sum+=(i)*(123 - static_cast<int>(c));
            i++;
        }
        return sum;
    }
};