class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
    int diff = INT_MAX ;
    int l = 0;
    int r =arr.size()-1;
    int first,second;
    
    while(l<r){
        
        
        if(abs(arr[l] + arr[r] - x) < diff){
           
            first = arr[l];
            second = arr[r];
             diff = abs(arr[l] + arr[r] - x);
        }
        
        if(arr[l] + arr[r] >x){
            r--;
        }
        else{
            l++;
        }
    }
    return {first,second};

    }
};
