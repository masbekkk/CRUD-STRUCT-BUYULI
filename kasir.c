#include <stdio.h>
#include <stdlib.h>
struct a
{
    char nam[15][15];
    int jmlh[15];
    long int harga[15];
};
int main()
{
    struct a ab;
    int a,b,c,bnyk;
    printf("masukan jumlah barang yang dibeli: ");
    scanf("%d",&bnyk);
    for(a=0;a<bnyk;a++)
    {
        printf("masukan nama barang = ");
        scanf("%s",&ab.nam[a]);
        printf("harga barang = ");
        scanf("%d",&ab.harga[a]);
        printf("jumlah barang = ");
        scanf("%d",&ab.jmlh[a]);
        printf("total harga barang yang dibeli : %d", ab.harga[a]*ab.jmlh[a]);
    printf("\n");
    }
    system("cls");
    printf("no | masukan nama barang  | harga barang | jumlah barang | total harga|\n");
    printf("-----------------------------------------------------------------------\n");
    for(a=0;a<bnyk;a++)
    {
    printf("%-3d| %-20s |     %-8d |     %-10d| %-10d |", a+1,ab.nam[a],ab.harga[a],ab.jmlh[a],ab.jmlh[a]*ab.harga[a]);
    printf("\n------ -----------------------------------------------------------------\n");
    }
}
