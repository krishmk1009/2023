#include <iostream>
#include <string>
using namespace std;
// Function to calculate the Fibonacci sequence recursively

void printNumbers(int n){
    
    if(n<1) return;
    
    printNumbers(--n);
    cout<<n<<" ";
}
int fact(int n){
    
    if(n==1) return 1;
    
    return n* fact(n-1);
}

int sumOfDigits(int n){
    if(n ==0)return 0;
    
    int digit = n%10;
    
    return digit + sumOfDigits(n/10);
    
    
    
}

// int reverseN(int n){
    
//     if(n ==0) return 1;
//     int ans = 0;
//     int digit = n%10;
//     ans
    
//     return reverseN(n/10) *  digit +10 ;
    
// }

bool palindrome(string str, int s, int e){
    
    if(s>=e){
        return true;
    }
    
    if(str[s]!=str[e]) return false;
    
    return palindrome(str, s+1 , e-1);
}
int countZero(int n ){
    
    if(n == 0) return 0;
    
    int digit = n%10;
    if(digit ==0) {
        return 1+ countZero(n/10);
    }
    
   return  countZero(n/10);
}
int main(){
    
    printNumbers(5);
   cout<<fact(5)<<endl;
   cout<<sumOfDigits(11229)<<endl;
  string str = "abaccaba";
   cout<<palindrome(str , 0 , str.length()-1)<<endl;
//   cout<<reverseN(5564);

    cout<<countZero(321069000 );
    return 0;
}
