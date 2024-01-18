*/
Given 2 non-negative integers A and B, find gcd(A, B).
GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both A and B fit in a 32-bit signed integer.
NOTE: DO NOT USE LIBRARY FUNCTIONS

Input 1:
A = 6
B = 9

Output 1:
3
*/

int Solution::gcd(int x, int y) {
      int dividend=x>y?x:y;
    int divisor=x>y?y:x;
    while(divisor!=0){
        int rem=dividend%divisor;
        dividend=divisor;
        divisor=rem;
    }
    return dividend;
}
