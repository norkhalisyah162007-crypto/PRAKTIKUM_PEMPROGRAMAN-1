#include <stdio.h> 

int reverse(int n){ 
    int hasil = 0;
    while (n > 0) {
        int digit = n % 10;
        hasil = hasil * 10 + digit;
        n /= 10;
    }
    return hasil;
}

int main() { 
int A, B; 
printf("Masukkan nilai A dan B: ");
scanf("%d %d",&A,&B);

A=reverse(A);
B=reverse(B);

int C = A + B; 
printf("Hasil Representasi: %d",reverse(C)); 

return 0;
}