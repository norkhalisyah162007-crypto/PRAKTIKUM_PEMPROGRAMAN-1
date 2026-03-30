#include <stdio.h>
    int main (){
    int a = 400000;
    int b = 350000;
    int hasil1 = a - (a*13/100);
    int hasil2 = b - (b*21/100);

printf ("Harga sepatu A adalah %d\n",a);
printf ("Harga sepatu B adalah %d\n",b);
printf ("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n",hasil1);
printf ("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d",hasil2);
 
return 0;
}