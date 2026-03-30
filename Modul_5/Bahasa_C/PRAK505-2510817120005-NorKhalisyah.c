#include <stdio.h> 
 
void Biodata(int tahunLahir, char nama [20], char asal [15]){ 
int tahun_sekarang = 2020; 
int umur = tahun_sekarang - tahunLahir; 

printf("\nPerkenalkan Nama Saya: %s\n", nama);
printf("Umur Saya: %d Tahun\n", umur);
printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);
printf("Asal Saya dari: %s\n", asal);

} 
 
int main() { 
int tahunLahir; 
char A[20], B[15]; 

printf("Masukkan Tahun Lahir: ");
scanf(" %d",&tahunLahir); 
printf("Masukkan Nama: ");
scanf(" %[^\n]%*c",A); 
printf("Masukkan Asal: ");
scanf(" %[^\n]%*c",B);
Biodata(tahunLahir, A, B); 
return 0; 
} 