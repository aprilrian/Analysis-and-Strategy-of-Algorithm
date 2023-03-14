#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int i, n, count = 0;
    cin >> n;
    
    int Arr[n];
    for (i = 0; i < n; i++){
        Arr[i] = i+1;
    }
    Arr[n-1] = n;
    
    for (i = 0; i < n; i++){
        if (is_prime(Arr[i])){
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}