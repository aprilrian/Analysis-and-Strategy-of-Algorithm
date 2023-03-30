#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int hitung_satu(vector<int>& arr, int start, int end) {
    // basis (hanya satu elemen dalam array)
    if (start == end) {
        return arr[start];
    }
    // rekursif
    int mid = (start + end) / 2;
    int leftCount = hitung_satu(arr, start, mid);
    int rightCount = hitung_satu(arr, mid+1, end);
    // menghitung jumlah total angka 1
    return leftCount + rightCount;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << hitung_satu(arr, 0, n-1) << endl;
    return 0;
}
