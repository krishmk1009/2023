class Solution {
public:
void cSort(vector<int>&arr){

    

}
    int findDuplicate(vector<int>& nums) {
       int i = 0;

    while(i<nums.size()){
        int cur = nums[i]-1;
        if(nums[i] == nums[cur] && i >cur) return nums[i];

        if(nums[i] != nums[cur]){
            swap(nums[i] , nums[cur]);
        }
        else{
            i++;
        }
    }
    return -1;
    }
};

