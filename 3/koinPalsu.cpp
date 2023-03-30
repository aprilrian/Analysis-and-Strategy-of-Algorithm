#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int find_fake_coin() {
    vector<int> coins;
    int coin;
    while (cin >> coin) {
        coins.push_back(coin);
    }

    unordered_map<int, int> cek_koin;
    int n = coins.size();
    for (int i = 1; i < n; i++) {
        if (cek_koin.find(coins[i]) == cek_koin.end()) {
            cek_koin[coins[i]] = 1;
        } else {
            cek_koin[coins[i]] += 1;
        }
    }

    int koin_palsu = 1;
    for (const auto& [k, v] : cek_koin) {
        if (v == 1) {
            koin_palsu = k;
        }
    }

    for (int i = 1; i < n; i++) {
        if (coins[i] == koin_palsu) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int fake_coin_index = find_fake_coin();
    cout << fake_coin_index << endl;
    return 0;
}
