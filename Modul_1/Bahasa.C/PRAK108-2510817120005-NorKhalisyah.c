#include <stdio.h>
int main (){
    int a = 5;
    int b = 14;
    float keliling = (float) b / a;
    float jari2 = (float) keliling / (2 * 3.14);
printf ("Diketahui :\nPak Dengklek mengelilingi taman = %d putaran\n", a);
printf ("Jarak tempuh Pak Dengklek = %d Kilometer\n", b);
printf ("Jawab :\nJari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari2);

return 0;
}