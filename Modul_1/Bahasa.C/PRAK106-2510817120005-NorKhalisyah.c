#include <stdio.h>
int main (){
    int a = 4;
    int b = 8;
    int c = 3;
    int sama = (a == b);
    int besar = (b > c);
    int tidaksama = (a != c);

printf ("Variabel a bernilai %d\n", a);
printf ("Variabel b bernilai %d\n", b);
printf ("Variabel c bernilai %d\n", c);
printf ("Apakah a sama dengan b ? jawabannya adalah %d\n", sama);
printf ("Apakah b lebih besar dari c ? jawabannya adalah %d\n", besar);
printf ("Apakah a tidak sama dengan c ? jawabannya adalah %d", tidaksama);

return 0;
}