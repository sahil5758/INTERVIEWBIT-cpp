int Solution::maximumGap(const vector<int> &A) {
    
    int n=A.size();
    int dif=0;
    vector<int> v;
    copy(A.begin(),A.end(),back_inserter(v));
    sort(v.begin(),v.end());
    if(n<2){
        return 0;
    }
    for(int i=0;i<n-1;i++){
        dif=max(dif,abs(v[i]-v[i+1]));
    }
    return dif;
}
