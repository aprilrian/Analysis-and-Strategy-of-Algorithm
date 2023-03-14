#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int x){
    int i;
    
    if (x < 2){
        return false;
    }
    for (i = 2; i <= sqrt(x); i++){
        if (x % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int x;
    cin >> x;
    
    isPrime(x) ? cout << "Prima" : cout << "Bukan Prima";
    
    return 0;
}