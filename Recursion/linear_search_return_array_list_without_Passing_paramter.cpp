#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> linear_search_recursive(vector<int> arr, int target, int index ) {
    vector<int> ans;
    if (index == arr.size()) {
        return ans;
    }
    
    if (arr[index] == target) {
        ans.push_back(index);
    }
    
    vector<int> fromBelowCalls = linear_search_recursive(arr, target, index + 1);
    
    vector<int> merged(ans.size() + fromBelowCalls.size());

    merge(ans.begin(), ans.end(), fromBelowCalls.begin(), fromBelowCalls.end(), merged.begin());
    
    return merged;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 2, 6, 2};
    int target = 2;
 
    vector<int> result = linear_search_recursive(arr, target,  0);

    cout << "Indexes of " << target << " in the array: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}


// js code

/*
let arr = [1, 2, 3, 4, 2, 6, 2];
    let target = 2;
 
    const result = linear_search_recursive(arr, target,  0);
    
    console.log(result);
    
    
function linear_search_recursive(arr, target, index){
    
    let ans = [];
    
    if(index === arr.length) return ans;
    
    if(arr[index] === target) ans.push(index);
    
    let fromBelowCalls = linear_search_recursive(arr, target, index+1);
    
    ans = ans.concat(fromBelowCalls);
    return ans;
    
}

*/
