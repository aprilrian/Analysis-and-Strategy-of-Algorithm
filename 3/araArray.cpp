#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


constexpr int MAX = 100;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int sum = 0, ans = a[0], left = 0, right = 0, tmp = 0;

    for (int i = 0; i < N; i++) {
        sum += a[i];
        if (sum > ans) {
            ans = sum;
            left = tmp;
            right = i;
        }
        if (sum < 0) {
            sum = 0;
            tmp = i + 1;
        }
    }

    cout << ans << endl;

    for (int i = left; i <= right; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
