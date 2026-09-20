class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = (right - left)/2 + left;
        while(nums[mid]!=target && mid!=left){
            if(nums[mid]>target){
                right = mid;
            }
            else{
                left = mid;
            }
            mid = (right - left)/2 + left;
        }
        if(nums[mid] != target){
            if(nums[right]<target && right!=left){
                return mid+2;
            }
            else if(nums[mid]>target) return mid;
            return mid+1;
        }

        return mid;
    }
};