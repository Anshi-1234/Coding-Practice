#include <bits/stdc++.h> 
int minimumOperations(string &a, string &b)
{
    //  Write your code here.
    if(a==b)
    return 0;
    if(a.length()!=b.length())
    return -1;

    int n=a.length();
   
    int ans=0;
    for(int i=0;i<n/2;i++)
    {
       unordered_map<char,int>m;

       m[a[i]]++;
       m[b[i]]++;
       m[a[n-i-1]]++;
       m[b[n-i-1]]++;

       int size=m.size();

       if(size==4)
       {
        ans+=2;
       }
       else if(size==3)
       {
         ans+=1+(a[i]==a[n-i-1]);
       }
       else if(size==2)
       {
         ans+=m[a[i]]!=2;
       }
    }
    if(n%2==1 && a[n/2]!=b[n/2])
    {
      ans++;
    }
   return ans;
}
