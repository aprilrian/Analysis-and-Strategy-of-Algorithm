#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, count, i;
    cin >> N;
    int Arr[N];
    for (i = 0; i < N; i++){
        cin >> Arr[i];
    }
    
    count = 0;
    for (i = 0; i < N; i++){
        if (Arr[i] % 2 == 0){
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}