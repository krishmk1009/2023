class Solution {
public:
    bool isPowerOfFour(int n) {
        
if(n ==1) return true;
if(n <1) return false;
if(n%4 == 0) return true;

return false;
    }
};
