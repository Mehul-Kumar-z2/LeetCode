class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            sum+=(i+1)*(('a' - static_cast<char>(s[i])) + 26);
        }
        return sum;
    }
};