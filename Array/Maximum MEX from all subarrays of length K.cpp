#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int mexOfSubarrays(vector<int>&subarray, int k){
    
    
    int maxii =0;
    
    for(int i = 0 ; i<subarray.size() ; i++){
    
   
        
    unordered_set<int> s(subarray.begin()+i , subarray.begin()+i+k);
    
            int mex = 1;
             while(s.count(mex)) mex ++;
    
            if(mex>maxii) maxii = mex;
        
    }
   
   
    return maxii;
    
}

int main() {
	 vector<int> array = {3, 2, 1, 4};
    int n = array.size();


       int k = 2;
        int maxii = mexOfSubarrays(array, k);
       cout<<maxii;

    return 0;
}
