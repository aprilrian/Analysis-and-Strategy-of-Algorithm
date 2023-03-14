#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size, arr[100], i, sum;
    scanf("%d", &size);
    
    for (i=0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    sum = 0;
    
    for (i=0; i < size; i++){
        sum = sum + arr[i];
    }
    
    printf("%d", sum);
    
    return 0;
}