#include <bits/stdc++.h> 
vector<int> printArrayAfterKOperations(vector<int> &Arr, int N, int K) {

	if(K==0)
	return Arr;
    if(K%2==0)
	{
      K=2;
	}
	else
	{
		K=1;
	}
	while(K--)
	{
	   int maxi=*max_element(Arr.begin(),Arr.end());
		for(int i=0;i<N;i++)
		{
			Arr[i]=maxi-Arr[i];
		}
        
	}
	return Arr;
}
