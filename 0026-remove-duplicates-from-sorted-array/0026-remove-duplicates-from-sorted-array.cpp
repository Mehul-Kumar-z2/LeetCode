class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0; i< nums.size()-1; i++){
            int j = i+1;
            if(nums[j] == nums[i]){
                while(nums[j]==nums[i] && j<nums.size()){
                    nums.erase(nums.begin()+j);
                }   
            }
        }
        return nums.size();
    }
};