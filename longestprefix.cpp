string Solution::longestCommonPrefix(vector<string> &A) {
   string s=A[0];
   
   string prefix="";
   
   if(A.size()<=0)
   return prefix;
   
   if(A.size()==1)
   return A[0];
   
   for(int i=0;i<s.length();i++)
   {
      char curr=s[i];
       for(int j=1;j<A.size();j++)
       {
          if(curr!=A[j][i])
          {
             return prefix;
          }
       }
       prefix+=curr;
   }
   return prefix;
}
