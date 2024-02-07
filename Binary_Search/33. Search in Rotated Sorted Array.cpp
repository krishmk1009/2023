class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k = target;
        int start =0;
        int end = nums.size()-1;

        while(start <= end){
            int mid = (start+end)/2;
             if(nums[mid]==k){
                return mid;
            }

            if(nums[start] <= nums[mid]){

                if(k<= nums[mid] && k >= nums[start]){
                    end = mid-1;
                }
                else{
                    start =mid+1;
                }
            }
            else{
                if(k >= nums[mid] && k <= nums[end]){
                    start= mid+1;

                }
                else{
                    end = mid-1;
                }
                
            }
        }

        return -1;


    }
};
