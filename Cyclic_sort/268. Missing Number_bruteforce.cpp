class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int i = 0;

        while (i < nums.size()+1) {

            if(i == nums.size()) return i;
            if (i != nums[i])
                return i;
            i++;
        }
        return -1;
    }
};268. Missing Number
