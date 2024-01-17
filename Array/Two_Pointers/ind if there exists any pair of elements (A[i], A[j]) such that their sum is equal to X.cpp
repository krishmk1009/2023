// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(int A[] , int X,int N){
    
    int i = 0 , j = N-1;
    
    while(i<j){
        
        if(A[i]+A[j] == X){
            return {i , j};
        }
        
        if(A[i]+A[j] > X){
            j--;
        }
        else{
            i++;
        }
    }
    return {};
    
    
}

int main() {
    // Write C++ code here
    int A[] = {10, 20, 35, 50, 75, 80};
    int X = 70;
    int N = 5;

   vector<int>ans =  solve(A, X,N);
   
   for(auto i:ans) cout<<i<<" ";

    return 0;
}
