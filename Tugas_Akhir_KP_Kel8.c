#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define maxList 50

int count = 5;
typedef struct specs{
    char merk[30];
    int harga;
    float lebarLayar;
    char typeLayar[30];
    int kameraBelakang;
    int kameraDepan;
    char processor[30];
    int RAM;
    int internal;
    bool external;
    bool nfc;
    int batt;
    int charger;
}specs;
char Nama_index[13][99]={
    "Merk",
    "Harga",
    "Lebar layar",
    "Jenis Layar",
    "Kamera Belakang",
    "Kamera Depan",
    "Processor",
    "RAM",
    "Penyimpanan",
    "External",
    "NFC",
    "Battery",
    "Charger",
};
specs phone[maxList] = {
    {"Samsung M31s",3299000,6.5,"Super AMOLED",64,32, "Exynos 9611",8,128,1,1,6000,25},
    {"Xiaomi Mi Note 10 Pro",8250000,6.47,"AMOLED",108,32, "Snapdragon 730g",8,256,0,1,5260,30},
    {"Vivo V15 Pro",3350000,6.39,"Super AMOLED",48,32, "Snapdragon 675",6,128,1,1,3700,18},
    {"Oppo F11 Pro",2450000,6.53,"LTPS IPS LCD",48,16, "Mediatek Helio P70",6,64,1,0,4000,20},
    {"Apple iPhone 12 Pro Max",20000000,6.7,"Super Retina XDR OLED",12,12, "Apple A14 Bionic",6,128,0,1,3687,15},
};

int menu();
void showAll();
void show();
void edit();
void add();
void del();
void addDot();
void search();

int main(){
    system("cls");
    while(1){
        int pilih = menu();
        if(pilih == 2 || pilih == 3) showAll();
        if(pilih == 1)add();
        else if(pilih == 2)del();
        else if(pilih == 3)edit();
        else if(pilih == 4)search();
        else if(pilih == 5)showAll();
        else if(pilih == 6)system("cls");
        else break;
    }
    return 0;
}

int menu(){
    int pilih;
    printf("====================================================\n");
    printf("1. Tambah\t5. Tampilkan Semua\n");
    printf("2. Hapus\t6. Bersihkan Tampilan\n");
    printf("3. Edit\t\t7. End Program\n");
    printf("4. Cari\n");
    printf("Apa yang ingin anda lakukan ? ");
    scanf("%d", &pilih);
    return pilih;
}
void search(){
    system("cls");
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

    int pilih, found = 0;
    printf("ingin mencari berdasarkan ? ");
    scanf("%d", &pilih);
    
    system("cls");

    if(pilih == 1){         //Cari Merk
        char input[90];
        printf("Masukkan Merk yang ingin anda cari : \n");
        getchar();
        gets(input);
        for(int a=0; a<strlen(input); a++) input[a] = toupper(input[a]);

        for(int a=0; a<count; a++){
            char name[90];
            strcpy(name, phone[a].merk);
            for(int b=0; b<strlen(name); b++) name[b] = toupper(name[b]);
            if(!strcmp(input, name)){
                printf("====================================================\n");   
                show(a);
                found++;
            }
        }
        if(found == 0){
            for(int a=0; a<count; a++){
                int identik = 0;
                int locspace = 0;
                char name[90];
                strcpy(name, phone[a].merk);
                for(int b=0; b<strlen(name); b++){
                    name[b] = toupper(name[b]);
                    if(name[b] == input[b]) identik++;
                    if(name[b] == ' ' && !locspace) locspace = b;
                }
                if(identik == locspace){
                    printf("====================================================\n");
                    show(a);
                    found++;
                }
            }
        }
    }
    else if(pilih == 2){    //Cari Harga
        int min, max;
        char smin[20], smax[20];
        printf("Masukkan harga minimum : Rp. ");
        scanf("%d", &min);
        printf("Masukkan harga maximum : Rp. ");
        scanf("%d", &max);
        addDot(min, smin);
        addDot(max, smax);
        system("cls");
        printf("Smartphone berharga kisaran Rp. %s - Rp. %s :\n", smin, smax);
        for(int a=0; a<count; a++){
            if(phone[a].harga >= min && phone[a].harga <= max){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }
    }
    else if(pilih == 3){    //Cari ukuran Layar
        float min, max;
        printf("Masukkan ukuran Layar minimum :  ");
        scanf("%f", &min);
        printf("Masukkan ukuran Layar maximum :  ");
        scanf("%f", &max);
        system("cls");
        printf("Smartphone berukuran layar kisaran %.1f\" - %.1f\" :\n", min, max);
        for(int a=0; a<count; a++){
            if(phone[a].lebarLayar >= min && phone[a].lebarLayar <= max){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }
    }
    else if(pilih == 4){    //Cari Jenis Layar
        char input[90];
        printf("Masukkan Jenis Layar yang ingin anda cari : \n");
        getchar();
        gets(input);
        for(int a=0; a<strlen(input); a++) input[a] = toupper(input[a]);

        for(int a=0; a<count; a++){
            char name[90];
            strcpy(name, phone[a].typeLayar);
            for(int b=0; b<strlen(name); b++) name[b] = toupper(name[b]);
            if(!strcmp(input, name)){
                printf("====================================================\n");   
                show(a);
                found++;
            }
        }
    }
    else if(pilih == 5){    //Cari Kamera Belakang
        int input;
        printf("Masukkan Resolusi Kamera belakang yang ingin dicari : ");
        scanf("%d", &input);
        system("cls");
        printf("Smartphone yang Resolusi Kamera belakangnya nya %dmp :\n", input);
        for(int a=0; a<count; a++){
            if(phone[a].kameraBelakang == input){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }
    }
    else if(pilih == 6){    //Cari Kamera Depan
        int input;
        printf("Masukkan Resolusi Kamera depan yang ingin dicari : ");
        scanf("%d", &input);
        system("cls");
        printf("Smartphone yang Resolusi Kamera depan nya %dmp :\n", input);
        for(int a=0; a<count; a++){
            if(phone[a].kameraDepan == input){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }
    }
    else if(pilih == 7){    //Cari Processor
        char input[90];
        printf("Masukkan Processor yang ingin anda cari : \n");
        getchar();
        gets(input);
        for(int a=0; a<strlen(input); a++) input[a] = toupper(input[a]);

        for(int a=0; a<count; a++){
            char name[90];
            strcpy(name, phone[a].processor);
            for(int b=0; b<strlen(name); b++) name[b] = toupper(name[b]);
            if(!strcmp(input, name)){
                printf("====================================================\n");   
                show(a);
                found++;
            }
        }

    }
    else if(pilih == 8){    //Cari RAM
        int input;
        printf("Masukkan RAM ingin dicari : ");
        scanf("%d", &input);
        system("cls");
        printf("Smartphone yang mempunyai RAM %dGB :\n", input);
        for(int a=0; a<count; a++){
            if(phone[a].RAM == input){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }

    }
    else if(pilih == 9){    //Cari Penyimpanan
        int input;
        printf("Masukkan Kapasitas Memory internal yang ingin dicari : ");
        scanf("%d", &input);
        system("cls");
        printf("Smartphone dengan internal %dGB :\n", input);
        for(int a=0; a<count; a++){
            if(phone[a].internal == input){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }

    }
    else if(pilih == 10){   //Cari External
        int input;
        printf("Masukkan kondisi External yang ingin anda cari :\n");
        printf("0 = Tidak Support External\n");
        printf("1 = Support External\n");
        printf("input : ");
        scanf("%d", &input);

        system("cls");
        printf("Smartphone yang %sSupport External :\n", input ? "" : "Tidak ");
        for(int a=0; a<count; a++){
            if(phone[a].external == input){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }
    }
    else if(pilih == 11){   //Cari NFC
        int input;
        printf("Masukkan kondisi NFC yang ingin anda cari :\n");
        printf("0 = Tidak Support NFC\n");
        printf("1 = Support NFC\n");
        printf("input : ");
        scanf("%d", &input);

        system("cls");
        printf("Smartphone yang %sSupport NFC :\n", input ? "" : "Tidak ");
        for(int a=0; a<count; a++){
            if(phone[a].nfc == input){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }

    }
    else if(pilih == 12){   //Cari Battery
        int min, max;
        printf("Masukkan kapasitas Battery minimum :  ");
        scanf("%d", &min);
        printf("Masukkan kapasitas Battery maximum :  ");
        scanf("%d", &max);
        system("cls");
        printf("Smartphone berkapasitas Battery kisaran %dmAh - %.dmAh :\n", min, max);
        for(int a=0; a<count; a++){
            if(phone[a].batt >= min && phone[a].batt <= max){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }
    }
    else if(pilih == 13){   //Cari Charger
        int input;
        printf("Masukkan Daya Charger yang ingin dicari : ");
        scanf("%d", &input);
        system("cls");
        printf("Smartphone yang memiliki Daya Charger %dW :\n", input);
        for(int a=0; a<count; a++){
            if(phone[a].charger == input){
                printf("====================================================\n");
                show(a);
                found++;
            }
        }
    }

    if(found == 0) printf("Tidak ditemukan dalam Database!\n\n");
}
void showAll(){
    system("cls");
    for(int num=0; num<count; num++){
        printf("====================================================\n");
        printf("%d. ", num+1);
        show(num);
    }
}
void show(int num){
    char harga[20];
    addDot(phone[num].harga, harga);
    printf("%s (Rp. %s)\n\n", phone[num].merk, harga);      
    printf("Lebar layar : %.1f Inch (%s)\n", phone[num].lebarLayar, phone[num].typeLayar);
    printf("Kamera      : %dMP (Depan), %dMP (Belakang)\n", phone[num].kameraDepan, phone[num].kameraBelakang);
    printf("Processor   : %s\n", phone[num].processor);
    printf("RAM         : %dGB\n", phone[num].RAM);
    printf("Penyimpanan : %dGB\n", phone[num].internal);
    printf("External    : %sSupport External\n", phone[num].external ? "" : "Tidak ");
    printf("NFC         : %sSupport NFC\n", phone[num].nfc ? "" : "Tidak ");
    printf("Battery     : %dmAh\n", phone[num].batt);
    printf("Charger     : %dW\n", phone[num].charger);
}
void addDot(int val, char *dest){
    sprintf(dest, "%d", val);
    int chlen = strlen(dest);
    if(chlen > 9){      // >= 1.000.000.000
        char temp;
        for(int a=0; a<3; a++)
            dest[(chlen+2)-a] = dest[chlen-1-a];
        for(int a=0; a<3; a++)
            dest[chlen-2-a] = dest[chlen-3-a];
        for(int a=0; a<3; a++)
            dest[chlen-4-a] = dest[chlen-6-a];
        dest[chlen - 1] = '.';
        dest[chlen - 5] = '.';
        dest[chlen - 9] = '.';
        dest[chlen + 3] = '\0';
    }
    else if(chlen > 6){ // >= 1.000.000
        char temp;
        for(int a=0; a<3; a++)
            dest[(chlen+1)-a] = dest[chlen-1-a];
        for(int a=0; a<3; a++)
            dest[chlen-3-a] = dest[chlen-4-a];
        dest[chlen-2] = '.';
        dest[chlen-6] = '.';
        dest[chlen + 2] = '\0';
    }
    else if(chlen > 3){ // >= 1.000
        char temp;
        for(int a=0; a<3; a++)
            dest[chlen-a] = dest[chlen-1-a];
        dest[chlen-3] = '.';
        dest[chlen + 1] = '\0';
    }
}
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
void add(){
    system("cls");
    printf("Form untuk menambah\n\n");
    printf("Masukkan Merk : ");
    getchar();
    gets(phone[count].merk);
    printf("Masukkan Harga : ");
    scanf("%d", &phone[count].harga);
    printf("Masukkan Lebar Layar : ");
    scanf("%f", &phone[count].lebarLayar);
    printf("Masukkan Jenis Layar : ");
    getchar();
    gets(phone[count].typeLayar);
    printf("Masukkan Kamera Depan : ");
    scanf("%d", &phone[count].kameraDepan);
    printf("Masukkan Kamera Belakang : ");
    scanf("%d", &phone[count].kameraBelakang);
    printf("Masukkan Processor : ");
    getchar();
    gets(phone[count].processor);
    printf("Masukkan RAM : ");
    scanf("%d", &phone[count].RAM);
    printf("Masukkan internal : ");
    scanf("%d", &phone[count].internal);
    printf("Support External ? (0/1) ");
    scanf("%d", &phone[count].external);
    printf("Support NFC ? (0/1) ");
    scanf("%d", &phone[count].nfc);
    printf("Masukkan Battery : ");
    scanf("%d", &phone[count].batt);
    printf("Masukkan Charger : ");
    scanf("%d", &phone[count].charger);
    count++;
    system("cls");
    showAll();
}
void del(){
    int pilih;
    printf("====================================================\n");
    printf("\nNomor berapa yang ingin anda hapus : ");
    scanf("%d", &pilih);
    pilih--;
    system("cls");
    for(int a=pilih; a<count; a++){
        strcpy(phone[a].merk, phone[a+1].merk);
        phone[a].harga = phone[a+1].harga;
        phone[a].lebarLayar = phone[a+1].lebarLayar;
        strcpy(phone[a].typeLayar, phone[a+1].typeLayar);
        phone[a].kameraDepan = phone[a+1].kameraDepan;
        phone[a].kameraBelakang = phone[a+1].kameraBelakang;
        strcpy(phone[a].processor, phone[a+1].processor);
        phone[a].RAM = phone[a+1].RAM;
        phone[a].internal = phone[a+1].internal;
        phone[a].external = phone[a+1].external;
        phone[a].nfc = phone[a+1].nfc;
        phone[a].batt = phone[a+1].batt;
        phone[a].charger = phone[a+1].charger;
    }
    count--;
    system("cls");
    showAll();
}
