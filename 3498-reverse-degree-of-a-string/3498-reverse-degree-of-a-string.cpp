class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int i = 1;
        for(char c : s){
            sum+=(i)*(('a' - static_cast<char>(c)) + 26);
            i++;
        }
        return sum;
    }
};