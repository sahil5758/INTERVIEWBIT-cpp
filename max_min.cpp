/*
Problem Description

Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

Example Input
Input 1:
 A = [-2, 1, -4, 5, 3]
Input 2:
 A = [1, 3, 4, 1]
Example Output
Output 1:
 1
Output 2:
 5


Problem Constraints
1 <= N <= 105

-109 <= A[i] <= 109

*/




int Solution::solve(vector<int> &A) {
    
    int max = INT_MIN;
    int min = INT_MAX;
    int n = A.size();
    for(int i = 0 ; i<n ;i++){
        if(A[i] >= max ){
            max =  A[i];
        }
         if(A[i] <= min ){
            min =  A[i];
        }
    }
    return max+min ;
}
