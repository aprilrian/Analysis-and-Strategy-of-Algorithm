#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string T, P;
    getline(cin, T);
    getline(cin, P);
    int n = T.length();
    int m = P.length();
    int count = 0;
    vector<pair<int,int>> indices;
    for (int i = 0; i <= n - m; i++) {
        if (T.substr(i, m) == P) {
            count++;
            indices.emplace_back(i, i + m - 1);
        }
    }
    if (count == 0) {
        cout << 0 << endl;
    } else {
        cout << count << endl;
    }
    for (auto& idx : indices) {
        cout << "(" << idx.first << ", " << idx.second << ")";
        if (&idx != &indices.back()) {
            cout << ",";
        }
    }
    return 0;
}
