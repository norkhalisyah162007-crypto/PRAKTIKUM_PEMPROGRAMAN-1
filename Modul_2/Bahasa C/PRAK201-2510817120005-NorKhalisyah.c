#include <stdio.h>
int main () {
    char nama [30], nim[20], kelas[40], ttl[30], alamat[50], hobi[20], nohp[20];

    printf("%-20s : ", "Nama");
    scanf(" %29[^\n]", nama);

    printf("%-20s : ", "NIM");
    scanf(" %19[^\n]", nim);

    printf("%-20s : ", "Kelas Paralel");
    scanf(" %39[^\n]", kelas);

    printf("%-20s : ", "Tempat/Tanggal Lahir"); 
    scanf(" %29[^\n]", ttl);

    printf("%-20s : ", "Alamat");
    scanf(" %49[^\n]", alamat);
    
    printf("%-20s : ", "Hobby");
    scanf(" %19[^\n]", hobi);

    printf("%-20s : ", "No. HP");
    scanf(" %19[^\n]", nohp);

    printf("%-20s : %s\n\n", "Nama", nama);
    printf("%-20s : %s\n", "NIM", nim);
    printf("%-20s : %s\n", "Kelas Paralel", kelas);
    printf("%-20s : %s\n", "Tempat/Tanggal Lahir", ttl);
    printf("%-20s : %s\n", "Alamat", alamat);
    printf("%-20s : %s\n", "Hobby", hobi);
    printf("%-20s : %s\n", "No. HP", nohp);

    return 0;
}