class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;
        int n = nums.size();
        int i=0;
        int j=n-1;
        int state_i=0;
        int state_j=0;
        while(i<=j){
            if(nums[i]==val){
                state_i=1;
            }
            else{
                if(state_i==1) state_i=0;
                i++;
            }
            if(nums[j]!=val){
                state_j=1;
            }
            else{
                if(state_j==1) state_j=0;
                j--;
            }
            if(state_i*state_j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        return i;
    }
};