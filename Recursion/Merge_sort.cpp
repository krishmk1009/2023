class Solution {
public:
    vector<int> merge(vector<int>& left, vector<int>& right) {

        vector<int> ans(left.size() + right.size());
        int i = 0;
        int k = 0;
        int j = 0;

        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j]) {
                ans[k++] = left[i++];
            } else {
                ans[k++] = right[j++];
            }
        }

        while (i < left.size()) {
            ans[k++] = left[i++];
        }
        while (j < right.size()) {
            ans[k++] = right[j++];
        }

        return ans;
    }
    vector<int> mergeSort(vector<int>& nums, int start, int end) {

       if (start >= end) {
        return vector<int>({nums[start]});
    }
    int mid  = (start+end)/2;

    vector<int> left = mergeSort(nums, start, mid);
    vector<int> right = mergeSort(nums, mid + 1, end);

    return merge(left, right);
    }
    vector<int> sortArray(vector<int>& nums) {

        return mergeSort(nums, 0, nums.size() - 1);
    }
};
