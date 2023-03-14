#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i, sapi, tahun, count1, count2;
    
    cin >> sapi >> tahun;
    
    count1 = sapi*2;
    count2 = sapi;
    
    for (i=0; i<tahun; i++) {
        count1 += count2;
        count2 = count1 - count2;
    }
    
    cout << count2;
    
    return 0;
}