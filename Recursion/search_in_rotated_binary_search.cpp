class Solution {
public:
int recursion(vector<int>& nums, int target, int s, int e){

    if(s>e){
        return -1;
    }

    int m =( s+e)/2;

    if(nums[m] == target) return m;

    if(nums[m] >= nums[s]){

        if(target <= nums[m] && target >=nums[s]){
            return recursion(nums,target, s, m-1);
        }
        else{
            return recursion(nums, target, m+1,e);
        }
    }
    else{

        if(target >=nums[m] && target <= nums[e]){
                        return recursion(nums, target, m+1,e);

        }
        else{
                        return recursion(nums,target, s, m-1);

        }
    }


}
    int search(vector<int>& nums, int target) {
        
        return recursion(nums, target, 0 , nums.size()-1);
    }
};
