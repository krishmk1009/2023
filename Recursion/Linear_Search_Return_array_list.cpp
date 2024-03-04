#include <iostream>
#include <vector>

using namespace std;

vector<int> linear_search_recursive(vector<int> arr, int target, int index , vector<int>& ans ) {
    if (index == arr.size()) {
        return ans;
    }
    
    if (arr[index] == target) {
        ans.push_back(index);
    }
    
    return linear_search_recursive(arr, target, index + 1, ans);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 2, 6, 2};
    int target = 2;
    vector<int> ans= {};
    vector<int> result = linear_search_recursive(arr, target,  0,ans);

    cout << "Indexes of " << target << " in the array: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
