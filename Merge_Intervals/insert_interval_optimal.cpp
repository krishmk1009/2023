class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> ans;

        int i = 0;

        int n = intervals.size();

        // add all the intervals that ends before the newIntervals
        while (i < n && intervals[i][1] < newInterval[0]) {
            ans.push_back(intervals[i]);
            i++;
        }

        // now merge the all overlapping intervals with newIntervals and update
        // with each step

        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }
        ans.push_back(newInterval);

        // add remaining intervals

        while (i < n) {

            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};
