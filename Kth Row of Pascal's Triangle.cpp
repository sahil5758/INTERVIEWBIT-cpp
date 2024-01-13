/*
  Problem Description
Given an index k, return the kth row of the Pascal's triangle.
Pascal's triangle: To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.
Example:
Input : k = 3
Return : [1,3,3,1]
Note: k is 0 based. k = 0, corresponds to the row [1]. 
Note: Could you optimize your algorithm to use only O(k) extra space?
*/
vector<int> Solution::getRow(int A) {
     vector<int> res{1};

    for(int i=1;i<=A;i++){

        vector<int> next_row(res.size()+1,0);

        for(int j=0;j<res.size();j++){

            next_row[j]+=res[j];

            next_row[j+1]+=res[j];

        }

        res=next_row;

    }

    return res;


}
