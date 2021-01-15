#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct spesifikasi
{
    char merk[30];
    char ukuran_layar[30];
    char resolusi_layar [30];
    char smart_TV [30];
    char android_TV [30];
    char model [30];
    char berat [30];
    char port [30];
    char warna [30];
    char garansi [30];
    char harga [30];


} spesifikasi;

spesifikasi spesifikasi_televisi [15] = {{"LG", "42", "1920 x 1080", "false","false","42LB550A","HDMI","Hitam","1 Tahun", "Rp.5.684.500"}};
                      
int jumlah = 1;
void cetak(spesifikasi arr[15])
{
    printf("------------------------\n");
    for (int i = 0; i < jumlah; i++)
    {
        printf("%s, %s,%s, %s,%s,model=%s,%s,%s,%s,%s, %s\n", arr[i].merk, arr[i].ukuran_layar, arr[i].resolusi_layar, arr[i].smart_TV,arr[i].android_TV,arr[i].model,arr[i].berat,arr[i].port,arr[i].warna,arr[i].garansi,arr[i].harga);
    }

}

/*void input()
{
    printf("------------------------\n");
    printf("masukkan nama: ");
    scanf("%s", &data_mhs[jumlah].name);
    printf("masukkan hari: ");
    scanf("%d", &data_mhs[jumlah].birthday.day);
    printf("masukkan bulan: ");
    scanf("%d", &data_mhs[jumlah].birthday.month);
    printf("masukkan tahun: ");
    scanf("%d", &data_mhs[jumlah].birthday.year);
    jumlah++;
}

student input2()
{
    printf("------------------------\n");
    student s;
    printf("masukkan nama: ");
    scanf("%s", &s.name);
    printf("masukkan hari: ");
    scanf("%d", &s.birthday.day);
    printf("masukkan bulan: ");
    scanf("%d", &s.birthday.month);
    printf("masukkan tahun: ");
    scanf("%d", &s.birthday.year);
    return s;
}

void input3(student *s2)
{
    printf("------------------------\n");
    printf("masukkan nama: ");
    scanf("%s", &s2->name);
    printf("masukkan hari: ");
    scanf("%d", &s2->birthday.day);
    printf("masukkan bulan: ");
    scanf("%d", &s2->birthday.month);
    printf("masukkan tahun: ");
    scanf("%d", &s2->birthday.year);
}
*/
void edit(int index, char harga[30])
{
    strcpy(spesifikasi_televisi[index].harga, harga);
}

/*
void edit2(int index, student mhs)
{
    data_mhs[index] = mhs;
}

void add(student mhs)
{
    data_mhs[jumlah] = mhs;
    jumlah++;
}

// fungsi untuk menukar
void tukar(student *x, student *y)
{
    student temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("fungsi tukar\n");
}

void tukar2(student x, student y)
{
    student temp;
    temp = x;
    x = y;
    y = temp;
    printf("fungsi tukar2\n");
}
void delete()
{
    int indeks=0, i;
    printf("masukkan index yang ingin dihapus : ");
    scanf("%d", &indeks);
    for (i = indeks; i < jumlah; i++)
        {
            data_mhs[i]=data_mhs[i+1];
        }
        jumlah--;
}*/
int main()
{
    char harga [20];
    cetak(spesifikasi_televisi);
    // printf ("masukkan harga baru : ");
    // scanf ("%s",&harga);
     edit(0, "Rp.5000000");
     cetak(spesifikasi_televisi);
    // delete();
    // cetak(data_mhs);

    // student s = {"Madani", 9, 29, 2001};
    // add(s);

    // student mhs = input2();
    // add(mhs);
    // cetak(data_mhs);
    
    // student s2;
    // input3(&s2);
    // add(s2);
    // cetak(data_mhs);

    // tukar2(data_mhs[1], data_mhs[3]);
    // cetak(data_mhs);

    // tukar(&data_mhs[0], &data_mhs[2]);
    // cetak(data_mhs);
    // input();
    // cetak(data_mhs);

    return 0;
}