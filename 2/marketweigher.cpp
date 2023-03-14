#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i, j, k, n, sum_kiri = 0, sum_kanan = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Menghitung sum bagian kiri dan kanan
    // for (j = 0; j < n; j++) {
    //     if (arr[j] == 0) {
    //         for (k = j + 1; k < n; k++) {
    //             sum_kanan += arr[k];
    //         }
    //         break;
    //     }
    //     sum_kiri += arr[j];
    // }
    
    for (j = 0; j < n; j++){
        if (arr[j] == 0){
            for (k = j + 1; k < n; k++){
                sum_kanan = sum_kanan + arr[k];
            }
            break;
        }
        sum_kiri = sum_kiri + arr[j];
    }

    // Membandingkan sum bagian kiri dan kanan
    if (sum_kiri == sum_kanan) {
        cout << "0" << endl;
    } else if (sum_kiri > sum_kanan) {
        cout << sum_kiri - sum_kanan << endl;
    } else {
        cout << -(sum_kanan - sum_kiri) << endl;
    }   
    
    return 0;
}