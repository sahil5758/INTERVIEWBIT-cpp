int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    
    int maxi = A[0];
    vector<bool> greater(n, true);
    for( int p = 1; p < n-1; p++ ) {
        if(A[p] <= maxi)    greater[p] = false;
        else    maxi = A[p];
    }
    
    int mini = A[n-1];
    for( int p = n-2; p > 0; p-- ) {
        if( A[p] < mini ) {
            if( greater[p] )   return 1;
            mini = A[p];
        }
    }
    
    return 0;
}
