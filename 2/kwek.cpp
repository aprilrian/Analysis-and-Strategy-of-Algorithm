#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int A, B, count, i;
    cin >> A >> B;

    // Menghitung banyaknya faktor dari A yang membagi habis B
    count = 0;
    for (i = 1; i <= A; i++) {
        if (A % i == 0 && B % i == 0) {
            count++;
        }
    }

    cout << count;   
    return 0;
}