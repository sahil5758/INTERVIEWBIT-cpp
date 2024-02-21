int Solution::solve(vector<int> &A, int B) {
      int s = 0;

    int e = A.size() - 1;

    int pivot = 0;

    while (s <= e) {

        int mid = (s + e) / 2;

        if (A[mid] > A[mid + 1]) {

            pivot = mid;

            break;

        } else if (A[mid] < A[mid + 1]) {

            s = mid + 1;

        } else {

            e = mid - 1;

        }

    }

    int start = 0;

    int end = pivot;

    while (start <= end) {

        int mid = (start + end) / 2;

        if (A[mid] == B) return mid;

        else if (A[mid] < B) start = mid + 1;

        else end = mid - 1;

    }

    start = pivot + 1;

    end = A.size() - 1;

    while (start <= end) {

        int mid = (start + end) / 2;

        if (A[mid] == B) return mid;

        else if (A[mid] > B) start = mid + 1;

        else end = mid - 1;

    }

    return -1;
}
