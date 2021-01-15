#include <stdio.h>
#include <string.h>


typedef struct TV
{
    char merk[30];
    char ukuran_layar[30];
    char resolusi_layar[30];
    char smart_TV[30];
    char android_TV[30];
    char model[30];
    char berat[30];
    char port[30];
    char warna[30];
    char garansi[30];
    char harga[30];
}TV;

char spesifikasi_TV[10][90] = {
    "Merk\t\t:\t",
    "Ukuran Layar\t:\t",
    "Smart TV\t:\t",
    "Android TV\t:\t",
    "Model\t\t:\t",
    "Berat\t\t:\t",
    "Port\t\t:\t",
    "Warna\t\t:\t",
    "Garansi\t\t:\t",
    "Harga\t\t:\t",
};

TV daftar_TV[10] =
{
                                        {"LG", "42", "1920 x 1080", "true","false","42LB550A","10 Kg","HDMI","Hitam","1 Tahun", "Rp.5.684.500"},
                                        {"SHARP", "24", "1366 X 768", "Tidak","Tidak","LC-24LE170I","14 kg","USB","Hitam","1 Tahun", "Rp 1.249.0000"},
                                        {"Samsung", "70", "3840 x 2160 ", "Ya","Tidak","UA70TU7000","2kg","USB, HDMI","Hitam","1 Tahun", "Rp.17.599.000"},
                                        {"Samsung", "65", "3840 x 2160", "Ya","Tidak","UA65TU7000","3kg","USB, HDMI","Putih","1 Tahun", "Rp.10.999.000"},
                                        {"Toshiba", "75", "3840 x 2160", "Ya","Tidak","75U7950","5Kg","USB,HDMI","Hitam","1 Tahun", "Rp.24.899.000"},
                                        {"Toshiba", "65", "3840 X 2160", "Ya","Tidak","65U7950","3Kg","USB,HDMI","Abu-abu","1 Tahun", "Rp.12.8999.000"},
                                        {"LG", "82", "3840x2160", "Ya","Tidak","82UM7500PTA","5Kg","USB,HDMI","Hitam","1 Tahun", "Rp.38.899.000"},
                                        {"Changhong", "32", "1366x768", "Ya","Tidak","L32H5T","2 Kg","USB,HDMI","Hitam","1 Tahun", "1.799.000"},
                                        {"Coooca", "65", "3840 x 2160", "Ya","Tidak","65S6G","6Kg","HDMI,USB","Abu-abu","1 Tahun", "Rp.8.699.000"},
                                        {"Cooca", "55", "3840x2160", "Ya","Tidak","55S6G","5 Kg","HDMI,USB","Hitam","1 Tahun", "Rp.7.799.000"}
};

int jumlah = 10;

// int main(){
//     system("cls");
//     while(1){
//         int pilih = menu();
//         //if(pilih == 2 || pilih == 3) cetak();
//         if (pilih == 1)cetak();
//         //if(pilih == 2)add();
//         //else if(pilih == 3)del();
//         //else if(pilih == 4)edit();
//         //else if(pilih == 5)search();
//         //else if(pilih == 5)showAll();
//         else if(pilih == 6)system("cls");
//         else break;
//     }
//     return 0;
// }

int menu(){
    int pilih;
    printf("====================================================\n");
    printf("                      MENU                          \n");
    printf("====================================================\n");
    printf("1. Tampilkan merk\t\n");
    printf("2. Tambah\t\n");
    printf("3. Hapus\t\n");
    printf("4. Edit\t\n");
    printf("5. Cari\n");
    printf("6. End Program\t\n\n");
    printf("pilih menu : ");
    scanf("%d", &pilih);
    return pilih;
}


void cetak(TV arr[10])
{
    system("cls");
    printf("\n========================================\n");
    printf("            Daftar Laptop\n");
    printf("========================================\n\n");
    for (int i = 0; i < jumlah; i++)
    {
        printf(spesifikasi_TV[0]);
        printf("%s\n", arr[i].merk);
        printf(spesifikasi_TV[1]);
        printf("%s inch\n", arr[i].ukuran_layar);
        printf(spesifikasi_TV[2]);
        printf("%s\n", arr[i].resolusi_layar);
        printf(spesifikasi_TV[3]);
        printf("%s\n", arr[i].android_TV);
        printf(spesifikasi_TV[4]);
        printf("%s\n", arr[i].model);
        printf(spesifikasi_TV[5]);
        printf("%s\n", arr[i].berat);
        printf(spesifikasi_TV[6]);
        printf("%s\n", arr[i].port);
        printf(spesifikasi_TV[7]);
        printf("%s\n", arr[i].warna);
        printf(spesifikasi_TV[8]);
        printf("%s\n", arr[i].garansi);
        printf(spesifikasi_TV[9]);
        printf("%s\n", arr[i].harga);
        
        printf("=========================================\n");
    }
}


/*
void edit(){
    int num;
    printf("====================================================\n");
    printf("\nNomer berapa yang ingin anda edit ? ");
    scanf("%d", &num);
    num--;
    system("cls");
    printf("apa yang ingin di edit dari %s ?\n", phone[num].merk);
    printf("1. %s\t\t\t", Nama_index[0]);
    printf(" 8. %s\n", Nama_index[7]);
    printf("2. %s\t\t", Nama_index[1]);
    printf(" 9. %s\n", Nama_index[8]);
    printf("3. %s\t\t", Nama_index[2]);
    printf("10. %s\n", Nama_index[9]);
    printf("4. %s\t\t", Nama_index[3]);
    printf("11. %s\n", Nama_index[10]);
    printf("5. %s\t", Nama_index[4]);
    printf("12. %s\n", Nama_index[11]);
    printf("6. %s\t\t", Nama_index[5]);
    printf("13. %s\n", Nama_index[12]);
    printf("7. %s\n\n", Nama_index[6]);

    int pilih;
    printf("Input Nomer : ");
    scanf("%d", &pilih);
    printf("\n%s dari %s adalah : ", Nama_index[pilih-1], phone[num].merk);
    
    char harga[20];
    addDot(phone[num].harga, harga);
    switch(pilih-1){
        case 0:
            printf("%s\n", phone[num].merk);
            printf("ingin diubah menjadi ? ");
            getchar();
            gets(phone[num].merk);
            break;
        case 1:
            printf("Rp. %s\n", harga);
            printf("ingin diubah menjadi ? ");
            scanf("%d", &phone[num].harga);
            break;
        case 2:
            printf("%.1f Inch\n", phone[num].lebarLayar);
            printf("ingin diubah menjadi ? ");
            scanf("%f", &phone[num].lebarLayar);
            break;
        case 3:
            printf("%s\n", phone[num].typeLayar);
            printf("ingin diubah menjadi ? ");
            getchar();
            gets(phone[num].typeLayar);
            break;
        case 4:
            printf("%dMP\n", phone[num].kameraBelakang);
            printf("ingin diubah menjadi ? ");
            scanf("%d", &phone[num].kameraBelakang);
            break;
        case 5:
            printf("%dMP\n", phone[num].kameraDepan);
            printf("ingin diubah menjadi ? ");
            scanf("%d", &phone[num].kameraDepan);
            break;
        case 6:
            printf("%s\n", phone[num].processor);
            printf("ingin diubah menjadi ? ");
            getchar();
            gets(phone[num].processor);
            break;
        case 7:
            printf("%dGB\n", phone[num].RAM);
            printf("ingin diubah menjadi ? ");
            scanf("%d", &phone[num].RAM);
            break;
        case 8:
            printf("%dGB\n", phone[num].internal);
            printf("ingin diubah menjadi ? ");
            scanf("%d", &phone[num].internal);
            break;
        case 9:
            printf("%d\n", phone[num].external);
            printf("ingin diubah menjadi ? ");
            scanf("%d", &phone[num].external);
            break;
        case 10:
            printf("%d\n", phone[num].nfc);
            printf("ingin diubah menjadi ? ");
            scanf("%d", &phone[num].nfc);
            break;
        case 11:
            printf("%dmAh\n", phone[num].batt);
            printf("ingin diubah menjadi ? ");
            scanf("%d", &phone[num].batt);
            break;
        case 12:
            printf("%dW\n", phone[num].charger);
            printf("ingin diubah menjadi ? ");
            scanf("%d", &phone[num].charger);
            break;
    }
    system("cls");
    showAll();
}
*/

int main()
{
    cetak(daftar_TV);
    //del();
    //edit();
}