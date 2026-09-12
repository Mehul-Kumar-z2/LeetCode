class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> result = digits;
        int add = result[n-1] +1;
        int carry = add/10;
        result[n-1] = add%10;
        while(carry){
            n--;
            if(n-1 < 0){
                result.insert(result.begin(), carry);
                carry=0;
            }
            else{
                add = result[n-1] + carry;
                carry = add/10;
                result[n-1] = add%10;
            }
        }
        return result;
    }
};