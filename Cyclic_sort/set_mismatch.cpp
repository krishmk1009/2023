class Solution {
public:

 void cyclicSort(vector<int>&nums){

        int i = 0;

        while(i<nums.size()){

            int index = nums[i]-1;

            if(nums[i] != nums[index]){

                swap(nums[i] , nums[index]);
            }
            else{
                i++;
            }
        }
    }
    vector<int> findErrorNums(vector<int>& nums) {
        int first,second;
        cyclicSort(nums);

   
    for(int i=0;i<nums.size() ; i++){

        if(nums[i]!= i+1){
           return {nums[i] , i+1};
        }
    }
    return {-1,-1};
    }
};
