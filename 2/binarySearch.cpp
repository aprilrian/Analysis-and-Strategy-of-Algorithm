#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int loop = 1;

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        loop++;
    }
    
    return -1;
}

int main() {
    int n, x, i, index;
    cin >> n >> x;
    
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    index = binarySearch(arr, n, x);

    cout << index << ' ' << loop;

    return 0;
}