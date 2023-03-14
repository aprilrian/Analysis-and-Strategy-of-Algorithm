#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Meminta input jumlah bola dari pengguna
    int n;
    cin >> n;

    // Membuat vektor nomor bola
    vector<int> bola(n);
    generate(bola.begin(), bola.end(), [n = 0]() mutable { return ++n; });

    // Menghitung jumlah kemungkinan urutan bola
    int jumlah_kemungkinan = 1;
    for (int i = 1; i <= n; i++) {
        jumlah_kemungkinan *= i;
    }

    // Menghitung dan mencetak semua kemungkinan urutan bola secara acak
    do {
        for (int j = 0; j < n; j++) {
            cout << bola[j] << " ";
        }
        cout << endl;
    } while (next_permutation(bola.begin(), bola.end()));

    return 0;
}