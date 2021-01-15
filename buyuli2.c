#include <stdio.h>
int minimum (int, int);
int main()
{
    int a, b, kecil = 0;
    printf("Masukkan nilai a : ");
    scanf("%d", &a);
    printf("Masukkan nilai b : ");
    scanf("%d", &b);
    //kecil = minimum(a, b);
    minimum2(a, b, &kecil);
    printf("\nBilangan terkecil antara %d dan %d adl %d\n\n",a,b,kecil);
}
void minimum2(int x, int y, int *h)
{
    if (x < y)
        *h=x;
    else
        *h=y;
    printf("\n Di dalam fungsi, Bilangan terkecil antara %d dan %d adl %d\n\n",x,y,*h);
}

int minimum(int x, int y)
{
    if (x < y)
        return(x);
    else
        return(y);
}