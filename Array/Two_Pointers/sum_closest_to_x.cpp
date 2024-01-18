public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
    int mini = INT_MAX;
    int first, second;
    
    for(int i = 0;i<arr.size()-1 ; i++){
        
        
        
        for(int j = i+1 ; j<arr.size() ; j++){
            
            if(abs(arr[i] + arr[j]  -x)  < mini && arr[i] + arr[j] <= x ){
                mini = abs(arr[i] + arr[j]  -x)  ;
                first = arr[i];
                second = arr[j];
            }
            
        }
    }
    return {first , second};

    }
