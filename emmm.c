#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

main()
{
    int acak;
    randomize();
    while (true)
    {
        acak=rand(100);
        //clrscr();
        printf("Hasil Pengacakan = %d ",acak);
        printf("\nTekan sembarang tombol untuk mengacak lagi");
       // getch();
    }
}
