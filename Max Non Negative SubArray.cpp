vector<int> Solution::maxset(vector<int> &A) {
    
     long int max_sum = -1, sum=0;
    vector<int> max_ans, ans;
   
    for(auto val:A){
        if(val<0) {if(sum>max_sum) {max_sum = sum; max_ans = ans;}
                   sum = 0;
                   while(!ans.empty()) {ans.pop_back();}
                   continue;
                   }
        sum += val;
        ans.push_back(val);
    }
   
    if(sum>max_sum) {max_sum = sum; max_ans = ans;} // right boundary case
   
    return max_ans;
}
