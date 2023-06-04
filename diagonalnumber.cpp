#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;
    vector<int> diagonal(2 * n - 1, 0);

    for (int i = 1; i <= 2 * n - 1; i++) {
        int num;
        if (i <= n) {
            num = i;
        } else {
            num = 2 * n - i;
        }
        diagonal[i - 1] = num;
    }

    for (int i = 1; i < 2 * n - 1; i++) {
        diagonal[i] = diagonal[i - 1] + diagonal[i];
    }

    vector<int> query = {10, 6, 16, 1, 12, 11, 9, 3, 8, 16, 2, 1};

    for (auto i : query) {
        int index = lower_bound(diagonal.begin(), diagonal.end(), i) - diagonal.begin();
        cout << index + 1 << endl;
    }

    return 0;
}
