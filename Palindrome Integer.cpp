/*

Determine whether an integer is a palindrome. Do this without extra space.
A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed. Negative numbers are not palindromic.

Return 1 if A is a Palindrome Integer else return 0.
  */



int rev(int n){
   int ans=0;
    while(n!=0){
        ans=(ans*10)+n%10;
        n=n/10;
    }
    return ans;
}

int Solution::isPalindrome(int A) {
  if(A<0){
        return 0;
    }
    if(A==rev(A)){
        return 1;
    }
    return 0;
}
