class Solution {
public:
    void cSort(vector<int>& nums) {
        long long i = 0;

        while (i < nums.size()) {
        
            if (nums[i] > 0 && nums[i] <= nums.size() &&
                nums[i] != nums[nums[i]-1]) {
                swap(nums[i], nums[nums[i]-1]);
            } else {
                i++;
            }
        }
    }

    int firstMissingPositive(vector<int>& nums) {
        cSort(nums);

        for (long long i = 0; i < nums.size(); i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return nums.size() + 1;
    }
};
