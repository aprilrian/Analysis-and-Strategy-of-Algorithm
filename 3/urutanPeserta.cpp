#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Buat barisan seharusnya
    vector<int> seharusnya(arr);
    sort(seharusnya.begin(), seharusnya.end());

    // Hitung jumlah ketidakurutan dalam barisan
    int jumlah_ketidakurutan = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                jumlah_ketidakurutan++;
            }
        }
    }

    // Menampilkan barisan seharusnya dan jumlah ketidakurutan dalam barisan
    for (int i = 0; i < n; i++) {
        cout << seharusnya[i] << " ";
    }
    cout << endl;
    cout << jumlah_ketidakurutan << endl;

    return 0;
}
