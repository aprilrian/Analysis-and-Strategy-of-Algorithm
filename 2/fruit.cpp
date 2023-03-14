#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// function to find GCD (Greatest Common Divisor) of two numbers
int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

// function to find LCM (Highest Common Factor) of two numbers
int lcm(int x, int y) {
    return (x * y) / gcd(x, y);
}

int main() {
    int N, A, B, i, kpk = 0; 
    int Line[3];
    
    for (i = 0; i < 3; i++){
        cin >> Line[i];
    }
    
    N = Line[0];
    A = Line[1];
    B = Line[2];    
    
    kpk = lcm(A, B);
    
    cout << (kpk / A) + (kpk / B);
    
    return 0;
}