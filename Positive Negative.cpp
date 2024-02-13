vector<int> Solution::solve(vector<int> &A) {
     vector<int> np;
    int n=0;
    int p=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<0){
            n++;
        }
        else if(A[i]>0){
            p++;
        }
    }
    np.push_back(p);
    np.push_back(n);
    return np;
}
