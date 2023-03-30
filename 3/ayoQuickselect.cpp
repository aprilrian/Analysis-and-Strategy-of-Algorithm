#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
using namespace std;


int Pisaharr(vector<int>& arr, int kiri, int kanan) {
    int index_pivot = random() % (kanan - kiri + 1) + kiri;
    int pivot = arr[index_pivot];
    swap(arr[index_pivot], arr[kanan]);
    int simpan = kiri;
    for (int i = kiri; i < kanan; i++) {
        if (arr[i] < pivot) {
            swap(arr[i], arr[simpan]);
            simpan++;
        }
    }
    swap(arr[simpan], arr[kanan]);
    return simpan;
}

int Quickselect(vector<int>& arr, int kiri, int kanan, int k) {
    if (kiri == kanan) {
        return arr[kiri];
    }
    int index_pivot = Pisaharr(arr, kiri, kanan);
    if (k == index_pivot) {
        return arr[k];
    }
    else if (k < index_pivot) {
        return Quickselect(arr, kiri, index_pivot - 1, k);
    }
    else {
        return Quickselect(arr, index_pivot + 1, kanan, k);
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << Quickselect(arr, 0, n - 1, x - 1);
    return 0;
}
