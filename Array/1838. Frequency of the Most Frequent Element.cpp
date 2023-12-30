class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long l = 0 , r = 0 ;
        long long sum = 0;
        long ans = 0;


        sort(nums.begin() , nums.end());

        for(;r<nums.size() ; r++){
            sum+=nums[r];


            for(;nums[r]*(r-l+1) -sum>k ;l++){
                sum-=nums[l];
            }


            ans = max(ans , r-l+1);
        }

        return ans;
    }
};
