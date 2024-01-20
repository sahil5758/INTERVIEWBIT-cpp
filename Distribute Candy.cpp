/*
Problem Description :-

N children are standing in a line. Each child is assigned a rating value.
You are giving candies to these children subjected to the following requirements:
1. Each child must have at least one candy.
2. Children with a higher rating get more candies than their neighbors.
What is the minimum number of candies you must give?
Input 1:
A = [1, 2]
Input 2:
 A = [1, 5, 2, 1]
Output 1:
 3
Output 2:
 7
*/

int Solution::candy(vector<int> &A) {
    
    
        int n = A.size();
    vector<int> left(n,1);
    vector<int> right(n,1);
   
    for(int i=1;i<n;i++) {
        if(A[i] > A[i-1]) {
            left[i] = left[i-1] + 1;
        }
    }
   
    for(int i=n-2;i>=0;i--) {
        if(A[i] > A[i+1]) {
            right[i] = right[i+1] + 1;
        }
    }
   
    int sum = 0;
    for(int i=0;i<n;i++) {
        left[i] = max(left[i], right[i]);
        sum += left[i];
    }
   
    return sum;
}

