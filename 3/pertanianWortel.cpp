#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int maxSubarraySum(vector<int>& arr) {
    int max_so_far = -1000000;
    int max_ending_here = 0;
    for (int i = 0; i < arr.size(); i++) {
        max_ending_here += arr[i];
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << maxSubarraySum(arr) << endl;
    return 0;
}
