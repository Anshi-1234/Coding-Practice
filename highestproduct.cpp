int Solution::maxp3(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    int prod1 = A[n - 1] * A[n - 2] * A[n - 3]; // Product of three largest elements
    int prod2 = A[0] * A[1] * A[n - 1]; // Product of two smallest elements and the largest element
    return max(prod1, prod2); // Return the maximum of the two products
}

 
