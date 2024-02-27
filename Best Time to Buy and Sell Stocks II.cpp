int Solution::maxProfit(const vector<int> &A) {
    
      int n=A.size();
    if(n<=1) return 0;
    vector<int> dp(n,0);
   
    int buy=A[0];
    for(int i=1;i<n;i++){
       
        if(A[i]<buy){
            buy=A[i];
            dp[i]=dp[i-1];
        }
        else
        {
            int profit=A[i]-buy;
            dp[i]=dp[i-1]+profit;
            buy=A[i];
        }
    }
    return dp[n-1];
}
