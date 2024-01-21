class Solution {
public:
    unordered_map<int,int>mp;

    bool solve(int n){
        
        if(mp.find(n) !=mp.end()) return false;
        if(n == 1) return true;
        
           mp[n]++;
        
        int sum =0; 
        while(n!=0){
            int digit = n%10;
            sum+= digit*digit;
            n/=10;
        }

     

        return solve(sum);

 

    }
    bool isHappy(int n) {
        
        return solve( n);
    }
};
