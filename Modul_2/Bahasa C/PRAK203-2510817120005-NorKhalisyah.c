#include <stdio.h>

int main() {
    double a, b, i, j, x, y, hasil;
    int count;

    printf("Masukkan 6 nilai\n");
    count = scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &i, &j, &x, &y);

    if (count == 6) {
        hasil = (a - b) * (i / j) - (x + y);
        printf("%.3lf\n", hasil);
    } 
    else if (count == 2) {
        scanf("%lf %lf", &a, &b);
        scanf("%lf %lf", &i, &j);
        scanf("%lf %lf", &x, &y);

        hasil = (a - b) * (i / j) - (x + y);
        printf("%.3lf\n", hasil);
    } 

    return 0;
}
