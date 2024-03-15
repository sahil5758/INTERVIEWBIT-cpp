void Solution::sortColors(vector<int> &A) {
    int n = A.size();
    int l = 0;
    int r = n-1;
    int mid = 0;
    while(mid<=r){
        if(A[mid] == 0)
            swap(A[l++],A[mid++]);
        else if(A[mid] == 2)
            swap(A[r--],A[mid]);    
        else mid++;
    }
}
