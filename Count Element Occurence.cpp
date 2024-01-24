/*
Given a sorted array of integers, find the number of occurrences of a given target value.

Your algorithm’s runtime complexity must be in the order of O(log n).

If the target is not found in the array, return 0

**Example : **

Given [5, 7, 7, 8, 8, 10] and target value 8,

return 2.
*/

int Solution::findCount(const vector<int> &A, int B) {
     int s,e,m,c;
    c=0;s=0;e=A.size()-1;
    while(s<=e)
    {
        m=s+(e-s)/2;
        if(A[m]==B){c++;break;}
        else if(A[m]<B){s=m+1;}
        else {e=m-1;}
    }
    if(c>0)
    {
        s=m;e=m;
        while(s>0)
        {
            if(A[--s]==B)c++;
            else break;
        }
        while(e<A.size()-1)
        {
            if(A[++e]==B)c++;
            else break;
        }
    }
    return c;
}
