#include <stdio.h>

int main() {
    int pilih;
    double a, b, hasil;

    printf("Pilih Program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d", &pilih);

    if (pilih >= 1 && pilih <= 4) {
        printf("Masukkan nilai pertama : ");
        scanf("%lf", &a);
        printf("Masukkan nilai kedua : ");
        scanf("%lf", &b);

        if (pilih == 1) hasil = a + b;
        else if (pilih == 2) hasil = a - b;
        else if (pilih == 3) hasil = a * b;
        else hasil = a / b;

        const char *ops[] = {"penjumlahan", "pengurangan", "perkalian", "pembagian"};
        printf("Hasil %s antara %.2f dengan %.2f adalah %.2f", ops[pilih - 1], a, b, hasil);
    }

    else if (pilih == 5)
        printf("Terimakasih, telah menggunakan kalkulator NOR KHALISYAH");

    else
        printf("Input anda salah, silahkan coba lagi");

    return 0;
}
