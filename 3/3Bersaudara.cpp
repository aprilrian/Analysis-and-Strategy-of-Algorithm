#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> arr;
    int x;
    char c;
    while (cin >> x) {
        arr.push_back(x);
        c = getchar();
        if (c == '\n') {
            break;
        }
    }

    int count = 0;
    vector<vector<int>> pairs;
    int n = arr.size();
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if (arr[i] < arr[j] && arr[j] < arr[k]) {
                    count++;
                    pairs.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }

    cout << count << endl;
    sort(pairs.begin(), pairs.end());
    for (const auto& p : pairs) {
        cout << '[' << p[0] << ", " << p[1] << ", " << p[2] << ']' << endl;
    }

    return 0;
}
