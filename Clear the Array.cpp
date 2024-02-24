int Solution::solve(vector<int> &A) {
    
    map<int,int> deletesub;
    //Just see that the element which occurs the most will cause the problem.
    //So print its number of occurences.
    for(int i=0;i<A.size();i++)

    {
        deletesub[A[i]]++;
    }
    int attempts=0;
    for(auto it: deletesub)
    {
        if(it.second>attempts)
        attempts=it.second;

    }
    return attempts;
}
