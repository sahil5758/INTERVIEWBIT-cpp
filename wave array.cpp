/*
  Given an array of integers A, sort the array into a wave-like array and return it. 
In other words, arrange the elements into a sequence such that

a1 >= a2 <= a3 >= a4 <= a5..... 
NOTE: If multiple answers are possible, return the lexicographically smallest one.

Input 1:
A = [1, 2, 3, 4]
Output 1:
[2, 1, 4, 3]
  */
vector<int> Solution::wave(vector<int> &A) {
       int n = A.size();
   
    //sort the array
    sort(A.begin(), A.end());
   
    for(int i=0; i<n-1; i+=2)
    {
        swap(A[i], A[i+1]);
    }
   
    return A;
}
