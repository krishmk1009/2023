// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void bubble(vector<int>&arr,int r, int c){
    
    if(r==0) return;
    
    if(c<r){
        
        if(arr[c] >arr[c+1]) swap(arr[c], arr[c+1]);
        bubble(arr, r, c+1);
    }
    else{
        bubble(arr,r-1, 0);
    }
}

int main() {
    // Write C++ code here
    
    vector<int>arr = {4,9,1,2,6,13,2};
    bubble(arr,arr.size() , 0);
    for(auto i:arr){
        cout<<i<<" ";
    }
    

    return 0;
}
