#include <iostream>

using namespace std;

int fibonacci(int n);

int count0 =0;
int count1 =0;
int main (void){
    int num;
    cin >> num;

    for (int i=0; i<num ; i++){
        int num2;
         cin >> num2;
        fibonacci(num2);
         cout << count0<<" "<< count1 <<"\n";
        count0 =0;
        count1 =0;
    }
}

int fibonacci(int n) {
    if(n==0) {
        count0++;
        return 0;
    }
    else if ( n==1 ){
        count1++;
        return 1;
    }
    else {
        return fibonacci(n-1)+ fibonacci(n-2);
    }
}