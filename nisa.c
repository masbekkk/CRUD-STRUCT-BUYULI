#include <stdio.h>
#include <string.h>

//kurang edit, delete, sama search

typedef char string[255];
typedef struct
{
    string Judul;
    string Artist;
    string Album;
    string Genre;
    string Pencipta;
    int Tahun_Terbit;
} data_Lagu;

data_Lagu cetak_Lagu[20] = {
    {"Wanitaku", "Noah", "Single", "Pop", "Ariel", 2002},
    {"Respect", "Brodin Stylelistic", "Single", "Rap", "Muhammad Syarifudin", 2020},
    {"Wanitaku", "Noah", "Single", "Pop", "Ariel", 2002},
    {"Respect", "Brodin Stylelistic", "Single", "Rap", "Muhammad Syarifudin", 2020},
    {"Wanitaku", "Noah", "Single", "Pop", "Ariel", 2002},
    {"Respect", "Brodin Stylelistic", "Single", "Rap", "Muhammad Syarifudin", 2020},
    {"Wanitaku", "Noah", "Single", "Pop", "Ariel", 2002},
    {"Respect", "Brodin Stylelistic", "Single", "Rap", "Muhammad Syarifudin", 2020},
    {"Wanitaku", "Noah", "Single", "Pop", "Ariel", 2002},
    {"Respect", "Brodin Stylelistic", "Single", "Rap", "Muhammad Syarifudin", 2020},
};

int jumlah = 10;

//Fungsi cetak
void cetak(data_Lagu arr[20])
{
    for (int i = 0; i < jumlah; i++)
    {
        printf(" Judul Lagu : %s\n", arr[i].Judul);
        printf(" Artist : %s\n", arr[i].Artist);
        printf(" Album : %s\n", arr[i].Album);
        printf(" Genre : %s\n", arr[i].Genre);
        printf(" Pencipta : %s\n", arr[i].Pencipta);
        printf(" Tahun Rilis : %d\n", arr[i].Tahun_Terbit);
        printf("\n");
    }
}

//Fungsi input
void input()
{
    // jumlah=jumlah+1;
    printf("Masukkan Judul Lagu : ");
    scanf("%s", &cetak_Lagu[jumlah].Judul);
    printf("Masukkan Nama Artist : ");
    scanf("%s", &cetak_Lagu[jumlah].Artist);
    printf("Masukkan Nama Album : ");
    scanf("%s", &cetak_Lagu[jumlah].Album);
    printf("Masukkan Jenis Genre : ");
    scanf("%s", &cetak_Lagu[jumlah].Genre);
    printf("Masukkan Nama Pencipta : ");
    scanf("%s", &cetak_Lagu[jumlah].Pencipta);
    printf("Masukkan Tahun Rilisan : ");
    scanf("%d", &cetak_Lagu[jumlah].Tahun_Terbit);
    printf("\n");
    jumlah++;
}

int main()
{
    //Judul Program
    printf("Daftar Lagu by Muhammad Syarifudin & Annisa Arsylia A\n\n");

    //Fungsi cetak
    cetak(cetak_Lagu);

    //Fungsi input
    input();
    cetak(cetak_Lagu);

    return 0;
}