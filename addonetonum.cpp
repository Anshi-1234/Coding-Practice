vector<int> Solution::plusOne(vector<int> &A) {
    int carry=1;
    int n=A.size();
    for(int i=n-1;i>=0;i--)
    {
      int sum=A[i]+carry;
        A[i]=sum%10;
        carry=sum/10;
    }
    if(carry>0)
    {
        A.insert(A.begin(),carry);
    }
    //Removing leading zeroes
      while (!A.empty() && A[0] == 0) {
        A.erase(A.begin());
    }
    return A;
}
