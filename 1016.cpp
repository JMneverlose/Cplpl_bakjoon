#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long long check_sosu(long long a);
long long sqrt_integer(long long a);

long long sqrt_integer(long long a) {
  long long value;
  value = (long long)sqrt((double)a);
  return value;
}               

long long check_sosu(long long a) {
    long long i = 0;
    long long b = sqrt_integer(a);
    if (a != 1) {
        for (long long j = 2; j <= b; j++) {
            if (a % j == 0) {
                i = 1;
                break;
            }
        }
    } else {
        i = 1;
    }

    return i;
}

int main(void) {
    long long num1, num2;
    scanf("%lld %lld", &num1, &num2);

    long long size = num2 - num1 + 1;
    long long *arr = (long long *)malloc(sizeof(long long) * size);
    long long sqrtj = sqrt_integer(num2);
    if (num1 == num2){
          long long k=1;
        for (long long i = 1 ; i<sqrtj+1; i++){
            long long j = check_sosu(i);
            if(j==0){
            long long jm =i*i;
            if(num1 % jm==0){
                k=0;
                break;
            }
        }
        }
        printf("%lld",k);
    }

    else {
    for (long long i = 1; i < sqrtj + 1; i++) {
        long long j = check_sosu(i);
        if (j == 0) {
        long long jm = i*i;      
         if(num1%jm==0){
            arr[0] =1;
         } 
         if(num2%jm ==0){
            arr[size-1] =1;
         }
            for (long long k = 0; jm - num1 % (jm) + k * jm < size; k++) {
                arr[jm*(k+1) - num1 % (jm) ] = 1;   
            }
        }
    }
    long long num_real = 0;
    for (long long i = 0; i < size; i++) {
        if (arr[i] == 1) {
            num_real++;
        }
    }
    
    printf("%lld", size - num_real);
    }
    free(arr);
    return 0;
}