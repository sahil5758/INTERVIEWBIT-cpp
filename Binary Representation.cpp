string Solution::findDigitsInBinary(int A) {
    
    string s="";
    if(A==0)
    return "0";
    while(A!=0)
    {
        if(A%2==0)
        s.push_back('0');
        else s.push_back('1');
        A = A/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
