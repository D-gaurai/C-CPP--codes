//sliding window approach
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSum(vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) return -1;
    
    int max_sum = 0;
    for (int i = 0; i < k; i++) {
        max_sum += arr[i];
    }
    
    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];
        max_sum = max(max_sum, window_sum);
    }
    
    return max_sum;
}

int main() {
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    cout << "Maximum sum of a subarray of size " << k << " is " << maxSum(arr, k) << endl;
    return 0;
}*/
