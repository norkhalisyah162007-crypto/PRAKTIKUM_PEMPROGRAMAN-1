#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, keliling, luas;
    int count;
    
    printf("Masukkan tinggi dan alas segitiga\n");
    count = 
    scanf("%lf", &A);
    scanf("%lf", &B);

    if (count == 1) {
        C = sqrt(B * B - A * A);
        keliling = A + B + C;
        luas = 0.5 * A * C;

        printf("Alas = %.0lf cm\n", C);
        printf("Tinggi = %.0lf cm\n", A);
        printf("Keliling = %.0lf cm\n", keliling);
        printf("Luas = %.0lf cm^2\n", luas);
        printf("\n"); 
    }

    count = scanf("%lf %lf", &A, &B);
    if (count == 2) {
        C = sqrt(B * B - A * A);
        keliling = A + B + C;
        luas = 0.5 * A * C;

        printf("Alas = %.0lf cm\n", C);
        printf("Tinggi = %.0lf cm\n", A);
        printf("Keliling = %.0lf cm\n", keliling);
        printf("Luas = %.0lf cm^2\n", luas);
    }

    return 0;
}
