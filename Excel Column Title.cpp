string Solution::convertToTitle(int A) {   
     int r;
    string res;
    while(A) {
        r = A%26;
        if(r == 0) r = 26;
        res.push_back((char)(64 + r));
        A = (A-1)/26;
    }
    reverse(res.begin(),res.end());
    return res;    
}
