int getMinDiff(int arr[], int n, int k) 
    {
        // code here
        sort(arr,arr+n);
        int maxele=arr[n-1];
        int minele=arr[0];
        int diff=arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
           if(arr[i]>=k)  
           {
              maxele=max(arr[i-1]+k,arr[n-1]-k) ;
              minele=min(arr[i]-k,arr[0]+k);
              diff=min(diff,maxele-minele);
           }
         
        }
        
        return diff;
    }
