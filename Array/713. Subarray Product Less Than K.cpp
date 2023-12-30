713. Subarray Product Less Than K
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int l = 0, r=0 , ans = 0;

       if(k<=1) return 0;

        int prod = 1;
       for(;r<nums.size() ; r++){

           prod*= nums[r];

           for(;prod>=k ; l++){
               prod/= nums[l];
           }
           
           ans += r-l+1;
           
       }
        return ans;
    }
};
