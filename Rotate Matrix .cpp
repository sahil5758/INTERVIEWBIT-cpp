/*
you are given a N x N 2D matrix A representing an image.
Rotate the image by 90 degrees (clockwise).
You need to do this in place. Update the given matrix A.
  */


void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
       int row=A.size();
    int col=A[0].size();
    reverse(A.begin(),A.end());
    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
            swap(A[i][j],A[j][i]);
        }
    }
}
