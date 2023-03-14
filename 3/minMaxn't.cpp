#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[1000], n, input, result, max_second, min_second;
    n = 0;
    
    while(cin >> input){
        arr[n] = input;
        n++;
    }
    
    sort(arr, arr+n);
    
    max_second = arr[n-2];
    min_second = arr[1];
    
    if(arr[n-1] == arr[n-2]){
        max_second = arr[n-3];
    }
    
    if(arr[0] == arr[1]){
        min_second = arr[2];
    }
    
    result = max_second + min_second;
    cout << result;
    
    return 0;
}