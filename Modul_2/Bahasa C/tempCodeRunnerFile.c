#include <stdio.h>

int main() {
    double r, t;
    double volume, luas, keliling;
    double mpi = 22.0 / 7.0;
    int count;

    printf("Masukkan jari-jari dan tinggi tabung:\n");
    count = scanf("%lf %lf", &r, &t);

    if (count == 1) {
        scanf("%lf", &t);
    }

    volume = mpi * r * r * t;
    luas = 2 * mpi * r * (r + t);
    keliling = 2 * mpi * r;

    printf("Volume     = %.2lf\n", volume);
    printf("Luas       = %.2lf\n", luas);
    printf("Keliling   = %.2lf\n", keliling);

    return 0;
}
