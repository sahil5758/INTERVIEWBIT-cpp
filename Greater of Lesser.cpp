int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    
     int a=0,b=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>C){
            a++;
        }
    }
    for(int i=0;i<B.size();i++){
        if(B[i]<C){
            b++;
        }
    }
    return (a>b?a:b);
}
