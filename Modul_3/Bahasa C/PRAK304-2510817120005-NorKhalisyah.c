#include <stdio.h>
int main() {
    int nilai;
    printf("Format Masukan: ");
    scanf("%d", &nilai);

    if (nilai == 0)
    {
        printf("Format Keluaran: Nol");
    }
    else if (nilai >= 1 && nilai < 10)
    {
        printf("Format Keluaran: Satuan");
    }
    else if (nilai >= 10 && nilai < 20)
    {
        printf("Format Keluaran: Belasan");
    }
    else if (nilai >= 20 && nilai < 100)
    {
        printf("Format Keluaran: Puluhan");
    }
    else
    {
        printf("Format Keluaran: Anda Menginput Melebihi Limit Bilangan");
    }
    return 0;
}