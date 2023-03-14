#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, i, K;
    
    cin >> N;
    
    int A[N];
    int j = -1;
    
    for (i = 0; i < N; i++){
        cin >> A[i];
    }
    
    cin >> K;
    
    for (i = 0; i < N; i++){
        if (A[i] >= K){
            j = i;
            break;
        }
    }
    
    cout << j;
    return 0;
}