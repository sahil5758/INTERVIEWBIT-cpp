int Solution::solve(vector<int> &A) {
    int n = A.size();   
        if(n==1)
        return A[0];  
        if(A[0]>= A[1])
        return A[0];
        if(A[n-1] > A[n-2])
        return A[n-1];
        for(int i = 1; i < n; i++)
        {
            if(A[i] >= A[i-1] && A[i] >= A[i+1])        
            return A[i];
        }
        return -1;
}
