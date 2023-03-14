#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    int i = 0, j = n-1;
    while(i<j) {
        if(arr[i]+arr[j]==k) {
            cout << "Indeks: " << i+1 << " dan " << j+1 << endl;
            return 0;
        }
        else if(arr[i]+arr[j]>k) {
            j--;
        }
        else {
            i++;
        }
    }
    cout << "Tidak ditemukan" << endl;
    return 0;
}