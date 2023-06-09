vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int>span(n,1);
       stack<int>s;
       s.push(0);
       for(int i=1;i<n;i++)
       {
            while(!s.empty() && price[s.top()]<=price[i])
           {
               s.pop();
           }
           if(s.empty())
           {
               span[i]=i+1;
           }
           else
           {
               span[i]=i-s.top();
           }
           s.push(i);
       }
      return span; 
    }
