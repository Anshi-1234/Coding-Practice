int Solution::solve(vector<int> &A, int B) {
    int st = 0, end = A.size()-1;
    while(st <= end) {
        int mid = st + (end -st)/2;
        if(A[mid] == B) return mid;
        else if(A[mid] > B) {
            if(A[mid] > A[mid-1]) end = mid-1;
            else st = mid+1;
        }
        else if(A[mid] < B) {
            if(A[mid] > A[mid-1]) st = mid+1;
            else end = mid-1;
        }
    }
    return -1;
}
