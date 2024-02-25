int Solution::solve(vector<int> &A) {
     map<int,int> m;

    for(auto i : A) m[i]++;

    for(auto i : A) if(m[i]>1) return i;

    return -1;

}
