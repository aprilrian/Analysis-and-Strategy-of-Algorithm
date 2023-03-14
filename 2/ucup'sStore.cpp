#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Input jumlah uang didapat dan jumlah permen terjual
    int uang, permen, pembelian_promo, pembelian_satuan;
    cin >> uang >> permen;

    // Hitung jumlah pembelian dengan promo dan tanpa promo yang berhasil terjual
    pembelian_promo = -(uang - (5000*permen)) / 5000;
    pembelian_satuan = (uang - 20000*pembelian_promo) / 5000;
    
    cout << pembelian_promo << ' ' << pembelian_satuan;

    return 0;
}