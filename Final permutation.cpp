vector<int> Solution::findPerm(const string s, int n) {
    int i=1;
    int j=n;
    
    vector<int> ans;
    for(auto it:  s)
    {
        if(it=='I')
        ans.push_back(i++);
        else
        ans.push_back(j--);
        
    }

    ans.push_back(j);
    return ans;

}
