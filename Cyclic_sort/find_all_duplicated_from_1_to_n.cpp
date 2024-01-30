class Solution {
public:

void cSort(vector<int>&arr){

    int i = 0;

    while(i<arr.size()){
        int cur = arr[i]-1;

        if(arr[i] != arr[cur]){
            swap(arr[i] , arr[cur]);
        }
        else{
            i++;
        }
    }

}
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
         cSort(nums);

        for(int i = 0;i<nums.size() ;i++) {
          cout<<nums[i]<<" ";
        }

        for(int i = 0;i<nums.size() ;i++) {
            if( nums[i] != i+1) ans.push_back( nums[i]);
        }

        return ans;
    }
};
