	int findKRotation(int arr[], int n) {
	    // code here
	    
	   int start = 0;
	   int end = n-1;
	   
	   
	   while(start<=end){
	       
	       int mid =( start + end )/2;
	       
	       
	       if(mid<end && arr[mid] > arr[mid+1]){
	           return mid+1;
	       }
	       
	       if(mid>start && arr[mid-1] > arr[mid]){
	           return mid;
	       }
	       
	       if( arr[mid] <= arr[start]){
	           start = mid+1;
	       }
	       else{
	           end = mid-1;
	       }
	   }
	    
	    return 0;
	}
