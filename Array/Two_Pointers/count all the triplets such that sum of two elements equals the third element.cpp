class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	  sort(arr , arr+n);
	  int count = 0;
	  
	  for(int i = n-1 ; i>= 0 ;i--){
	      
	      int j = 0;
	      int k = i-1;
	      
	      while(j<k){
	          
	          if(arr[i] == arr[j] + arr[k]) count++;
	          
	          if(arr[i] > arr[j] + arr[k]) j++;
	          
	          else k--;
	          
	      }
	  }
	  return count;
	}
	
	

};
