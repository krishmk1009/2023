class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right = nums.size();
        int mid ;

        if(target>nums[right-1]) return right;


        while(left<=right){
            mid = (left+right)/2;

            if(nums[mid]== target) return mid;

            if(target > nums[mid]) {
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }

        return left;
    }
};
