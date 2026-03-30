#include <stdio.h> 
#include <math.h> 
int hitung(int nilai1, int nilai2){ 
    return nilai1 - nilai2;
} 

int mutlak(int angka){ 
    if(angka < 0)
        return -angka;
    else    
        return angka;
} 
int main() 
{
    int a,b,c,d; 
    printf("Masukkan nilai x1: ");
    scanf("%d",&a);

    printf("Masukkan nilai y1: ");
    scanf("%d",&c); 

    printf("Masukkan nilai x2: ");
    scanf("%d",&b); 

    printf("Masukkan nilai y2: ");
    scanf("%d",&d); 

    int hasil = hitung(a,b) + hitung(c,d); 

    printf("%d",mutlak(hasil)); 
return 0; 
}