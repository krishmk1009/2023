class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;

        int tempSum = 0;

        for(auto i:nums) tempSum+= i;

        return sum- tempSum;
    }
};
