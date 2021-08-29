int Solution::maxSubArray(const vector<int> &v) {
    int n = v.size();
    int sum=0,ans=INT_MIN;
     for(int i=0;i<n;i++)
     {
         sum+=v[i];
         if(sum>ans)
         ans=sum;
         if(sum<=0)
         sum=0;
         
     }
     return ans;
}
