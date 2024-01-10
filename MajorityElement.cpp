/*
Given an array of size N, find the majority element. The majority element is the element that appears more than floor(N/2) times.
You may assume that the array is non-empty and the majority element always exist in the array.
Example Input
A = [2, 1, 2]
Example Output
2
*/
int Solution::majorityElement(const vector<int> &nums) {
      int n = nums.size();
    int element=nums[0];
    int count=0;
    for(int i=0; i<n; i++){
        if(count == 0)
            element = nums[i];
           
        if(element == nums[i])
            count += 1;
        else
            count -= 1;
    }
   
    return element;
}
