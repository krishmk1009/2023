class Solution {
public:

    int nextNum(int n){

        int sum = 0;

        while(n!=0){
            int digit = n%10;
            sum+= digit*digit;

            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        
        int slow = n;
        int fast = nextNum(n);

        while(fast!=1 && fast!=slow){
            slow = nextNum(slow);
            fast = nextNum(nextNum(fast));
        }

        return fast ==1;
    }
};
