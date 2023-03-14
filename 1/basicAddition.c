#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int jumlah(int a, int b)
{
    return a + b;
}

int main() {
    int num1,num2;
    num1 = 3;
    num2 = 4;
    scanf("%d %d",&num1,&num2);
    int sum; 
    sum = jumlah(num1,num2);
    printf("%d",sum);
    
    return 0;
}