vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
    }
    vector<int> ans;
    for(int i=0;i<B.size();i++){
        // mp.count(B[i]) >0 -->for checking if key of B array exists  in map or not
        // mp[B[i]] > 0 -->Check if that element still exists or not in B array
        if(mp.count(B[i]) >0 && mp[B[i]] > 0){
            ans.push_back(B[i]);
            mp[B[i]]--;  // reduce the count of that element because,it's been included once
        }
    }
    return ans;
     
    
    
}
