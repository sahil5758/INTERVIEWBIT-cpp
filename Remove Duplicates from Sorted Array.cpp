int Solution::removeDuplicates(vector<int> &A) {

    int n=A.size();
    int i=0,j=0,ans=0;
    while(i<n){
        while(A[i]==A[i+1] && i<n-1) i++;
        swap(A[i++],A[j++]);
        ans++;
    }
    return ans;
}
