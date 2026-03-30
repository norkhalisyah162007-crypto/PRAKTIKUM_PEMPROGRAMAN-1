#include <stdio.h>
int main() {
    
    int nilai, kelipatan;
    
    printf("Masukkan Nilai: ");
    scanf ("%d", &nilai);
    printf("Masukkan Kelipatan: ");
    scanf ("%d", &kelipatan);

    int total = 0;

    for (int i = 1; i <= nilai; i++){
        int hasil = 0;

        for (int j=i; j>= 1; j--) {
            printf ("(%d * %d)", j, kelipatan);
            hasil += (j * kelipatan);
            if (j != 1) printf(" + ");
        }
        printf(" = %d\n", hasil);
        total += hasil;

    }
     printf("%d\n", total);
     return 0;
}