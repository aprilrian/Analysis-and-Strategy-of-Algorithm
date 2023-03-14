#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector<vector<int>> generate_subsets(vector<int>& nums) {
    vector<vector<int>> subsets {{}};
    for (int num : nums) {
        int n = subsets.size();
        for (int i = 0; i < n; i++) {
            vector<int> subset = subsets[i];
            subset.push_back(num);
            subsets.push_back(subset);
        }
    }
    return subsets.empty() ? vector<vector<int>> {{-999}} : subsets;
}

int main() {
    cout << "-999";
    int n, x;
    cin >> n;

    vector<int> himpunan;
    for (int i = 0; i < n; i++) {
        cin >> x;
        himpunan.push_back(x);
    }

    vector<vector<int>> subsets = generate_subsets(himpunan);
    for (auto subset : subsets) {
        for (auto num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}