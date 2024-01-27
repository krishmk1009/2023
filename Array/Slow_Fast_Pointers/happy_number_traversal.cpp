class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;

        while(n!=1){

            if(st.find(n) == st.end()){

                st.insert(n);
            }
            else return false;

            int sum = 0;

            while(n!=0){
                int digit = n%10;
                sum+= pow(digit,2);
                n/=10;

            }


            n = sum;
        }
        return true;
    }
};