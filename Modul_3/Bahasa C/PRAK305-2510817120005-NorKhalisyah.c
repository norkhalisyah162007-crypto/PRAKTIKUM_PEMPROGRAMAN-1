#include <stdio.h>
int main(){
int detik, hari, sisa, jam, menit;
printf("Format Masukan: ");
scanf("%d", &detik);

hari = detik/86400;
sisa = detik % 86400;
jam = sisa / 3600;
sisa= sisa % 3600;
menit= sisa/60;
detik= sisa % 60;

if (hari > 0){
    printf("Format Keluaran : %d hari %02d:%02d:%02d", hari, jam, menit, detik);}

else {
    printf("Format Keluaran : %02d:%02d:%02d", jam, menit, detik);}

return 0;    
}