#include<bits/stdc++.h>
bool isValidPair(vector<int> &arr, int n, int k, int m)
{
    // Write your code here.
    if(n%2!=0)
    return false;
    
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++)
    {
       freq[arr[i]%k]++;
    }

    for(auto i:freq)
    {
      int A=i.first;
      int B=(m-A%k+k)%k;
      if(freq[A]!=freq[B])
      {
        return false;
      }
    }
    return true;
}
