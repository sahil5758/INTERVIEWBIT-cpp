int Solution::solve(vector<int> &A) {
    
    int evensum = 0, oddsum = 0;
    for(int i = 0; i < A.size(); i++){
        if(i%2 == 0) evensum += A[i];
        else
        oddsum += A[i];
    }
   
    int oddleft = 0, evenleft = 0;
    int ans = 0;
   
    for(int i = 0; i < A.size(); i++){
        if(i%2 == 0){
            evensum -= A[i];
            if(evenleft + oddsum == oddleft + evensum)
            ans++;
            evenleft += A[i];
        }
        else{
            oddsum -= A[i];
            if(evenleft + oddsum == oddleft + evensum)
            ans++;
            oddleft += A[i];
        }
    }
    return ans;
}
