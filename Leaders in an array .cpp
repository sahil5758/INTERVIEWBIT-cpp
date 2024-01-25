/*
Given an integer array A containing N distinct integers, you have to find all the leaders in the array A.

 An element is leader if it is strictly greater than all the elements to its right side.

NOTE:The rightmost element is always a leader.

Input 1:
 A = [16, 17, 4, 3, 5, 2]
Output 1:
 [17, 2, 5]
*/
vector<int> Solution::solve(vector<int> &A) {
      int i=0;
    bool flag = true;
    vector<int> v;
    while(i<A.size()){
        for(int j=i+1; j<A.size(); j++){
            if(A[i]<A[j]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            v.push_back(A[i]);
        }
        else{
            flag = true;
        }
        i++;
    }
    return v;
}
