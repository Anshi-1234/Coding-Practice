#include <bits/stdc++.h> 
vector < int > countSmallerOrEqual(int * a, int * b, int n, int m) {
    //  Write your code here 
    vector<int> res;
    sort(b, b + m);
    for (int i = 0; i < n; i++)
    {
        int count = upper_bound(b, b + m, a[i]) - b;
        res.push_back(count);
    }

    return res;
}
