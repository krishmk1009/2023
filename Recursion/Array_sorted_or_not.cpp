// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


bool sorted(vector<int>arr,int i , int n){
    
    if(i ==n-1){
        return true;
    }
    
    if(arr[i] >arr[i+1]) return false;
    
   return sorted(arr,i+1 , n);
    
    
    
}
int main() {
    // Write C++ code here
vector<int> arr = {1,2,3,9,600,6};
int n = arr.size();
cout<<sorted(arr,0,n);
    return 0;
}
