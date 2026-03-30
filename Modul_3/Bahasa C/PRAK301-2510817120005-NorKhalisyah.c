#include <stdio.h>
int main(){
    printf("Masukkan Tiga Angka: \n");
    int a;
    printf("a = ");
    scanf("%d", &a);
    
    int b;
    printf("b = ");
    scanf("%d", &b);

    int c;
    printf("c = ");
    scanf("%d", &c);

    if (a <= b && a <=c) 
    {
        if (b < c) {
            printf ("\nHasil=  %d %d %d", a, b, c);}
        else {
            printf ("\nHasil=  %d %d %d", a, c, b);}
    }
    
    else if (b <= a && b <= c)
    {
        if (a < c){
            printf ("\nHasil=  %d %d %d", b, a, c);}
        else {
            printf ("\nHasil= %d %d %d", b, c, a);}
    }

    else 
    {
        if (a < b){
            printf ("\nHasil= %d %d %d", c, a, b);}
        else {
            printf ("\nHasil= %d %d %d", c, b, a);}
    }
return 0;
}