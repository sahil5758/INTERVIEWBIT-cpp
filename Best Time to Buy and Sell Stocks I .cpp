/*
Problem Description

Say you have an array, A, for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Return the maximum possible profit.
Input 1:
 A = [1, 2]
Output 1:
 1
 
Input 2:
 A = [1, 4, 5, 2, 4]
Output 2:
 4


*/
int Solution::maxProfit(const vector<int> &A) {
   int n = A.size();
    if(n==0)return 0 ;
    int minPrice = A[0];
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        ans = max(ans,A[i]-minPrice);
        minPrice = min(minPrice,A[i]);
    }
    return ans;

}
