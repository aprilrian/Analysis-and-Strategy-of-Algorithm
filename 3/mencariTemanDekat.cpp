#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int cariproyek(vector<int>& arr, int target) {
    int kecil = 0;
    int besar = arr.size() - 1;
    while (kecil <= besar) {
        int mid = (kecil + besar) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            besar = mid - 1;
        }
        else {
            kecil = mid + 1;
        }
    }
    return kecil;
}

vector<int> carik(vector<int>& arr, int k, int target) {
    vector<int> hasil;
    int indeksproyek = cariproyek(arr, target);
    int kiri = indeksproyek - 1;
    int kanan = indeksproyek;
    while (hasil.size() < k && (kiri >= 0 || kanan < arr.size())) {
        if (kiri >= 0 && (kanan >= static_cast<int>(arr.size()) || abs(arr[kiri] - target) <= abs(arr[kanan] - target))) {
            hasil.insert(hasil.begin(), arr[kiri]);
            kiri--;
        }
        else if (kanan < static_cast<int>(arr.size())) {
            hasil.push_back(arr[kanan]);
            kanan++;
        }
    }
    return hasil;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k, target;
    cin >> k >> target;
    vector<int> hasil = carik(arr, k, target);
    for (size_t i = 0; i < hasil.size(); i++) {
        cout << hasil[i] << " ";
    }
    cout << endl;
    return 0;
}
