#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


string build_tree(vector<int>& arr, int l, int r) {
    if (l > r) {
        return "-999";
    }
    int mid = (l + r) / 2;
    int root = arr[mid];
    string left_subtree = build_tree(arr, l, mid - 1);
    string right_subtree = build_tree(arr, mid + 1, r);
    return to_string(root) + " " + left_subtree + " " + right_subtree;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << build_tree(arr, 0, n - 1) << endl;
    return 0;
}
