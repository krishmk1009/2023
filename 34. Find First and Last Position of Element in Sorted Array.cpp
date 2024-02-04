class Solution {
public:

    int solve(vector<int>&nums , int target , int occur){
        int s = 0 , e = nums.size()-1,mid;
        int ans=-1 ;
        while(s<=e){
            mid = s+(e-s)/2;
            if(nums[mid] == target){

                ans = mid;
                if(occur == 0) {
                    e= mid-1;
                }
                else{
                    s = mid+1;
                } 
            }

            else if(nums[mid] <=target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }

            
        }
        return ans;
    }
  
    vector<int> searchRange(vector<int>& nums, int target) 
        

         return {solve(nums,target,0),solve(nums , target,1)};
    }
};   
