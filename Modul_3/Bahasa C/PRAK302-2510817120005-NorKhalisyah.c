#include <stdio.h>
int main()
{
int nilai;
printf("Masukkan nilai anda: ");
scanf("%d", &nilai);

if (nilai >=80)
{printf("Hasil: A");}

else if (nilai >=70)
{printf ("Hasil: B");}

else if (nilai >=60)
{printf("Hasil: C");}

else if (nilai >=50)
{printf("Hasil: D");}

else
{printf ("Hasil: E");}

return 0;
}