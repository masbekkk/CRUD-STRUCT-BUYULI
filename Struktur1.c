#include <stdio.h>
#include <string.h>

typedef struct date
{
    int month, day, year;
} date;
typedef struct student
{
    char name[30];
    date birthday;
} student;

student data_mhs[10] = {{"mukhlis", 12, 17, 2002},
                        {"syarif", 1, 1, 2001},
                        {"rayhan", 2, 2, 2002},
                        {"denas", 4, 5, 2002}};
int jumlah = 4;
void cetak(student arr[10])
{
    printf("------------------------\n");
    for (int i = 0; i < jumlah; i++)
    {
        printf("%s, %d/%d/%d\n", arr[i].name, arr[i].birthday.day, arr[i].birthday.month, arr[i].birthday.year);
    }
}
void input()
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

void edit(int index, char namaBaru[30])
{
    strcpy(data_mhs[index].name, namaBaru);
}

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
}
int main()
{
    cetak(data_mhs);
    input();
    //delete();
    cetak(data_mhs);

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
