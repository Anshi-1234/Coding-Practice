
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int solve(vector<int>& A) {
    map<vector<int>, int> m;
    for (int i = 0; i < A.size(); i++) {
        int num = A[i];
        vector<int> res;
        for (int j = 2; j <= num; j++) {
            if (isPrime(j) && num % j == 0) {
                res.push_back(j);
            }
        }
        sort(res.begin(),res.end());
        m[res]++;
    }
    long long int prod=1;
     for (auto it = m.begin(); it != m.end(); ++it) {
        prod = (prod * it->second) % 1000000007;
    }
    return static_cast<int>(prod);
}

int main() {
    vector<int> input = {6,18,2,4};
    int result = solve(input);
    cout << "Beauty of the array: " << result << endl;
    return 0;
}
