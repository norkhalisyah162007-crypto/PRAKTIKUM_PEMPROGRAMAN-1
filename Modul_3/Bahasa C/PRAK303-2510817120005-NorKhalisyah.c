#include <stdio.h>
int main()
{
int N;
printf("Masukkan Bilangan Bulat: ");
scanf("%d", &N);

if (N > 0)
{printf("Adalah Bilangan: Positif");}

else if (N < 0)
{printf ("Adalah Bilangan: Negatif");}

else
{printf ("Adalah: Nol");}

return 0;
}