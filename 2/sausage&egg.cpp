#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// n: panjang baris, k: posisi saat ini, line: baris saat ini
void generateLines(int n, int k, string line) {
    // basis: jika baris sudah sepanjang n, cetak baris
    if (k == n) {
        cout << line << endl;
        return;
    }

    // mencoba menambahkan karakter '0'
    generateLines(n, k+1, line + "0");

    // mencoba menambahkan karakter '1' jika tidak ada dua sosis bersebelahan
    if (line.length() == 0 || line[line.length()-1] != '1') {
        generateLines(n, k+1, line + "1");
    }
}

// memanggil fungsi generateLines untuk mencari semua kemungkinan baris
void findPossibleLines(int k) {
    generateLines(k, 0, "");
}

int main() {
    int k;
    
    cin >> k;
    
    findPossibleLines(k);
    
    return 0;
}