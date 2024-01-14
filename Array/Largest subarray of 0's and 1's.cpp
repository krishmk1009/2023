//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
int ans = 0;

        
        for(int i = 0 ; i<N ; i++){
            
            int count_0 = 0;
            int count_1 = 0;
            
            
            for(int j = i ; j<N ; j++){
                
                if(arr[j] == 0)  count_0++ ;
                   
                
                if(arr[j]==1)  count_1++;
                
                if(count_0 == count_1){
                    ans = max(ans , j-i+1);
                }
                
                
                
            }
            
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
