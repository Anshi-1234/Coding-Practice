  #include<bits/stdc++.h>
  int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,height[i]);
            left[i]=maxi;
            //cout<<left[i]<<endl;
        }
        maxi=0;
        for(int i=n-1;i>=0;i--)
        {
            maxi=max(maxi,height[i]);
            right[i]=maxi;
            //cout<<right[i]<<endl;
        }
        int water=0;
        for(int i=0;i<n;i++)
        {
          water+=min(left[i],right[i])-height[i];
        }
        return water;
    }
