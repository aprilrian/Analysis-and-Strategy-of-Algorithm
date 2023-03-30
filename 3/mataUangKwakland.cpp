#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    cin >> x;

    
    sort(coins.rbegin(), coins.rend());
    vector<int> print;
    
    while (x != 0){
        int count = 0;
        for (int j = 0; j < n; j++) {
            count = x / coins[j];
            for (int k = 0; k < count; k++) {
                print.push_back(coins[j]);
            }
        x -= coins[j] * count;
        count = 0;
        }
    }
    
    cout << print.size() << endl;
    for (int l = 0; l < print.size(); l++){
        cout << print[l] << " ";
    }
    
    return 0;
}
