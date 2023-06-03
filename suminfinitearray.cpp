 int mod=1000000007;
long long solve(vector<long long>&sum,long long range,long long n)
{
   long long count=(range/n)%mod;
   long long res=(count*sum[(int)n])%mod;

   res=(res+sum[(int)(range%n)])%mod;
   return res;
}

vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
   vector<long long>sum(n+1,0);
   vector<int>res;
   for(int i=1;i<=n;i++)
   {
      sum[i]=(sum[i-1]+arr[i-1])%mod;
   } 


   for(int i=0;i<queries.size();i++)
   {
      long long l=queries[i][0];
      long long r=queries[i][1];
      
      long long rsum=solve(sum,r,n);
      long long lsum=solve(sum,l-1,n);
        
      res.push_back((int)((rsum-lsum+mod)%mod));

   }
 return res;
}
