int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int nsum=INT_MIN;
    for(int i=0;i<B;i++)
    {
        nsum+=A[i];
    }
    int max = nsum;
    int lptr = B-1;
    int rptr = n-1;
    
   while(lptr>=0)
   {
       nsum-=A[lptr];
       nsum+=A[rptr];
       lptr--;
       rptr--;
      if(nsum>max)
    {max=nsum;}
   }
    return max;
}


