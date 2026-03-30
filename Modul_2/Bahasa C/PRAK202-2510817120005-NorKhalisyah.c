#include <stdio.h>
int main () {
    double a, b, hasil;

    printf("Masukkan nilai pertama: ");
    scanf("%lf", &a);
    
    printf("Masukkan nilai kedua: ");
    scanf("%lf", &b);

    hasil = a + b;

    if(a == (int) a)
    {
        printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", a, b, hasil);
    }
    else
    {
        printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", a, b, hasil);
    }
    return 0;
}