#include <stdio.h>
int main() {

    int a, b;
    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    int kiri = a, kanan = b;

    if (a < b) {
        while (kiri <= b&& kanan >=a) {
            printf("%d %d", kiri, kanan);
            kiri++;
            kanan--;
            if (kiri <= b && kanan >=a)
                printf(" - ");
        }
    }

    else {
        while (kiri >= b && kanan <= a){
            printf("%d %d", kiri, kanan);
            kiri--;
            kanan++;
            if (kiri >= b && kanan <= a)
                printf(" - ");
        }
    }

    return 0;
}
