#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;


int main() {
    int n;
    cin >> n;
    unordered_map<string, int> suara;
    for (int i = 0; i < n; i++) {
        string nama_calon;
        cin >> nama_calon;
        if (suara.count(nama_calon)) {
            suara[nama_calon]++;
        } else {
            suara[nama_calon] = 1;
        }
    }
    auto pemenang = max_element(suara.begin(), suara.end(),
                                     [](const auto& a, const auto& b) {
                                         return a.second < b.second;
                                     });
    cout << pemenang->first << endl;
    return 0;
}
