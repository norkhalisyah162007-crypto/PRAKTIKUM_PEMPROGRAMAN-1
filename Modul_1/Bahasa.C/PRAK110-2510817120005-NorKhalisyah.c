#include <stdio.h>
#include <math.h>
int main (){
    int a = 5.0;
    int t = 12;
    int b = sqrt(pow(t, 2.0) + pow(a, 2.0));
    int keliling = a + t + b;
    int luas = (a * t) / 2;

printf ("Diketahui :\nAlas = %d cm\nTinggi = %d cm\n",a,t);
printf ("\nJawab : \nSisi A = %d cm\n",t);
printf ("Sisi B = %d cm\n",b);
printf ("Sisi C = %d cm\n",a);
printf ("Keliling = %d cm\n",keliling);
printf ("Luas = %d cm\n",luas);

return 0;
}