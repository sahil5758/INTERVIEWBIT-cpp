/*
Problem Description

Given an sorted array A of size N. Find number of elements which are less than or equal to B.

NOTE: Expected Time Complexity O(log N)
Example Input
Input 1:

 A = [1, 3, 4, 4, 6]
 B = 4
Input 2:

 A = [1, 2, 5, 5]
 B = 3

Example Output
Output 1:
 4
Output 2:
 2
*/

int Solution::solve(vector<int> &A, int B) {
    
        int s = 0, e = A.size()-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(B>=A[mid])s = mid+1;
        else e = mid-1;
    }
    return e+1;
    
}
