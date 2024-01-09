/*
Given an integer array A of size N.
You have to pick exactly B elements from either left or right end of the array A to get the maximum sum.
Find and return this maximum possible sum.
NOTE: Suppose B = 4 and array A contains 10 elements then
You can pick the first four elements or can pick the last four elements or can pick 1 from the front and 3 from the back etc. you need to return the maximum possible sum of elements you can pick.
Example Input
Input 1:
 A = [5, -2, 3 , 1, 2]
 B = 3
Input 2:
 A = [1, 2]
 B = 1
Example Output
Output 1:
 8
Output 2:
 2
*/

int Solution::solve(vector<int> &A, int B) {
     int n=A.size();
    int i;
    int curSum=0;
    // Calculating the sum of first 'b' elements
    for(i=0; i<B; i++) {
        curSum+=A[i];
    }
    int maxSum=curSum;
    // Adding elements from the end of array one by one
    // while deleting elements from the front of array
    for(i=B-1; i>=0; i--) {
        curSum+=A[i+(n-B)]-A[i];
        maxSum=(curSum>maxSum)?curSum:maxSum;
    }
    return maxSum;
}
