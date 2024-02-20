int Solution::kthsmallest(const vector<int> &A, int B) {
      int low = *min_element(A.begin(), A.end());
    int high = *max_element(A.begin(), A.end());

    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = 0;
       
        // Count the number of elements less than or equal to mid
        for (int num : A) {
            if (num <= mid) {
                count++;
            }
        }

        // Adjust the search space based on the count
        if (count < B) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}
