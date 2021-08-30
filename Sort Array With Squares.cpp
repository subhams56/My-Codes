vector<int> Solution::solve(vector<int> &v) {
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        v[i]*=v[i];
    }
    sort(v.begin(),v.end());
    return v;
}
