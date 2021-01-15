#include <stdio.h>
#include <string.h>

int main()
{
    char str2[30];
    printf("Masukkan Nama barang yang Baru : ");
    //scanf("%s", &arr[index].nama_barang);
    char str[50]; 
    scanf("%[^\n]%*c", str); 
    //scanf("%[^\n]%*c",  &arr[index].nama_barang);
    strcpy(str2, str);
    puts(str2);
}