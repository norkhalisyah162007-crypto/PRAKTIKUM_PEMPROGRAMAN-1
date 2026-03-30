#include <stdio.h> 
int maksimal(int a, int b){ 
    if (a > b)
       return a;
    else 
        return b;

} 
int minimal(int a, int b){ 
    if (a < b)
       return a;
    else 
        return b;
} 
int main(){ 
int batas = 0; 
int maks = -100000; 
int minim = 100000;

printf("masukkan jumlah: ");
int bilangan; 
scanf("%d", &bilangan); 

printf("masukkan nilai: ");
while(batas < bilangan){ 
int nilai; 
scanf("%d", &nilai);
maks = maksimal(maks, nilai); 
minim = minimal(minim, nilai); 
batas++; 
} 

printf("nilai max: ");
printf("%d\n", maks);
printf("nilai min: ");
printf("%d",minim); 
}