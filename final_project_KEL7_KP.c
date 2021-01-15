#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int SESSION = 0;
typedef struct admin
{
    int id;
    char username[10];
    int role; //role 1 untuk administrator role 0 untuk pegawai kasir
} admin;
typedef struct toko
{
    char kode_barang[10], nama_barang[255];
    int harga, diskon, stock;
}toko;

int jml=11;
int total;
int tahta;

admin users[10] = {{0, "olik", 0},
                  {1, "dalmi", 0},
                  {2, "supri", 0},
                  {3, "masbek", 1},
                  {4, "jovan", 1},
                  {5, "pemilik", 1},
                  {6, "pegawai", 0}};

toko indoapril[20] = {{"MK01", "jawamilk", 20000, 20, 2}, {"KM01", "jawaorangaring", 20000, 15, 2},{"PM01", "jawasotel", 30000, 20, 2},{"MK02", "Camilan Pedas", 7000, 0},{"MK03", "Aqua 500mL", 3000, 2},{"MK04", "Mie Goreng Jumbo", 10000, 3}, {"KM02", "Pembersih Wajah Alami", 25000, 2}, {"MK03", "Pencerah Wajah Buatan", 40000, 0},{"PM02", "Frying Pan Electric", 300000, 30},{ "PM03", "Panci Automatic", 40000, 3},{"PM04", "Panci Manual", 300000, 50}};                

void login()
{
    char usrname[10];
    int id, res;

    while(1){
    printf("masukkan username : ");
    scanf("%s", usrname);
    printf("masukkan id anda : ");
    scanf("%d", &id);
    res = strcmp(usrname, users[id].username);
    if(res == 0) {
        tahta = users[id].role;
        SESSION = 1;  
        break;
    }
    else
    {
        SESSION = 0;
        printf("USERNAME ATAU ID MU KURANG BENAR\n");
    }
    }
}
void cetak(toko arr[10])
{
    printf("\n=======================================================================================\n");
    for (int i = 0; i < jml; i++)
    {
        printf("NOMOR BARANG : %d => \n\tKode Barang = %s\n\tNama Barang = %s\n\tHarga IDR %d, OFF TO %d%% \n\n",i, arr[i].kode_barang, arr[i].nama_barang ,arr[i].harga, arr[i].diskon);
    }
}
void cetak_index(int *index)
{
    printf("\n=======================================================================================\n");
    int i = *index;
    printf("NOMOR BARANG : %d => \n%s, %s, Harga IDR %d, OFF TO %d%% \n",i, indoapril[i].kode_barang, indoapril[i].nama_barang ,indoapril[i].harga, indoapril[i].diskon);  
}
void input_barang(toko arr[10])
{
    char oke;
    while(oke != 'S' &&  oke !='s'){
        printf("Masukkan Kode Barang : ");
        scanf("%s", &arr[jml].kode_barang);
        fflush(stdin);
        printf("Masukkan Nama Barang : ");
        scanf("%[^\n]", arr[jml].nama_barang);
        printf("Masukkan Harga Barang : ");
        scanf("%d", &arr[jml].harga);
        printf("Masukkan Diskon Barang : ");
        scanf("%d", &arr[jml].diskon);
        jml++;
        printf("\n=======================================================================================\n");
        printf("\nKetik S Jika Sudah Selesai Menginputkan : ");
        scanf("%s", &oke);
    }
    cetak(indoapril);
}
void editBarang(toko arr[10])
{
    int index, nomor;
    char oke;
    cetak(indoapril);
    while(oke != 'S' &&  oke !='s'){
        printf("Masukkan nomor barang yang ingin kamu ubah : ");
        scanf("%d", &index);
        if(index < jml){
            system("cls");
            printf("Berikut Data Barang yang Ingin Kamu Edit\n");
            cetak_index(&index);
                while(oke != 'S' &&  oke !='s'){
                    printf("Apa yang ingin kamu ubah?\n1. Kode Barang\n2. Nama Barang\n3. Harga Barang\n4. Diskon Barang\n5. Ubah Semua\n");
                    printf("\nMasukkan Nomor : ");
                    scanf("%d", &nomor);
                    if(nomor == 1){
                        
                        printf("\nMasukkan kode barang yang Baru : ");
                        scanf("%s", &arr[index].kode_barang);
                        strcpy(arr[index].kode_barang, arr[index].kode_barang);
                        cetak_index(&index);
                        printf("Ketik S jika sudah selesai MengEDIT : ");
                        scanf("%s", &oke);
                    }else if(nomor == 2){
                        
                        fflush(stdin);
                        printf("\nMasukkan Nama barang yang Baru : ");
                        scanf("%[^\n]", arr[index].nama_barang);
                        strcpy(arr[index].nama_barang, arr[index].nama_barang);
                        cetak_index(&index);
                        printf("\nKetik S jika sudah selesai MengEDIT : ");
                        scanf("%s", &oke);
                    }else if(nomor == 3){
                        
                        int harga_baru;
                        printf("\nMasukkan Harga barang yang Baru : ");
                        scanf("%d", &arr[index].harga);
                        arr[index].harga = arr[index].harga;
                        cetak_index(&index);
                        printf("\nKetik S jika sudah selesai MengEDIT : ");
                        scanf("%s", &oke);
                    }else if(nomor == 4){
                        
                        printf("\nMasukkan Diskon barang yang Baru : ");
                        scanf("%d", &arr[index].diskon);
                        arr[index].diskon = arr[index].diskon;
                        cetak_index(&index);
                        printf("\nKetik S jika sudah selesai MengEDIT : ");
                        scanf("%s", &oke);
                    }else if(nomor == 5){
                        
                        printf("\nMasukkan kode barang yang Baru : ");
                        scanf("%s", &arr[index].kode_barang);
                        strcpy(arr[index].kode_barang, arr[index].kode_barang);
                        fflush(stdin);
                        printf("\nMasukkan Nama barang yang Baru : ");
                        scanf("%[^\n]", arr[jml].nama_barang);
                        strcpy(arr[index].nama_barang, arr[index].nama_barang);
                        printf("\nMasukkan Harga barang yang Baru : ");
                        scanf("%d", &arr[index].harga);
                        arr[index].harga = arr[index].harga;
                        printf("\nMasukkan Diskon barang yang Baru : ");
                        scanf("%d", &arr[index].diskon);
                        arr[index].diskon = arr[index].diskon;
                        printf("\nKetik S jika sudah selesai MengEDIT : ");
                        scanf("%s", &oke);
                    }
                }      
        }else{
            system("cls");
            printf("Nomor Barang yang anda pilih tidak Tersedia\n");
    }
}
    printf("\n=======================================================================================\n");;
    printf("\nHasil Anda Mengedit adalah\n");
    cetak_index(&index);
}

void delete(toko arr[10])
{
    int indeks=0, i;
    cetak(indoapril);
    printf("Masukkan Nomor Barang yang Ingin Dihapus : ");
    scanf("%d", &indeks);
    for (i = indeks; i < jml; i++)
        {
            arr[i]=arr[i+1];
        }
        jml--;
        printf("\n=======================================================================================\n");
        printf("Hasil Hapusmu Adalah \n");
        cetak(indoapril);
}
void beli(toko arr[10]){
    int index, count, temp;
    char oke;
    while(oke != 'S' &&  oke !='s'){
        cetak(indoapril);
        printf("Masukkan Nomor Barang yang Akan Kamu Beli : ");
        scanf("%d", &index);
        system("cls");
        if(index < jml){
            cetak_index(&index);
            printf("\nmasukkan jumlah barang : ");
            scanf("%d", &count);
            temp=temp + arr[index].harga - (arr[index].harga * arr[index].diskon/100);
            total = temp*count;
            arr[index].stock - count; 
        }else{
            system("cls");
            printf("Nomor Barang yang anda pilih tidak Tersedia\n");
        }
        printf("Ketik S jika sudah selesai : ");
        scanf("%s", &oke); 
        system("cls"); 
    }
    printf("total belanjamu adalah : %d", total);
}
void bayar(){
    int bayar;
    printf("\nTotal Harga yang Harus Kamu bayarkan adalah : %d ", total);
    while(1){
        printf("\nMasukkan Nominalmu : IDR ");
        scanf("%d", &bayar);
        if(bayar < total){
            printf("Uangmu Kurang Mas..\n");
        }else{
            printf("Berikut Kembalian Uangmu %d", bayar - total);
            break;
        }
    } 
}
void menu(){
    int menu;
    char oke;
    //while(1){
        if(SESSION == 1){
            //break;
            while(oke != 'S' &&  oke !='s'){ 
                if(tahta == 1){
                    printf("Menu Kasir Toko IndoApril\nMode : Pemilik Toko\n1. Input Barang\n2. Lihat List Barang\n3. Edit Barang\n4. Hapus Barang\n5. Pembayaran\n");
                    printf("\nMasukkan Nomor pada Menu : ");
                    scanf("%d", &menu);
                    if(menu == 1){
                        system("cls");
                        printf("\nKamu dalam Mode Input Barang \n");
                        input_barang(indoapril);
                    }else if(menu == 2){
                        system("cls");
                        printf("\nKamu dalam Mode Lihat List Barang \n");
                        cetak(indoapril);
                    }else if(menu == 3){
                        system("cls");
                        printf("\nKamu dalam Mode Edit Barang \n");
                        editBarang(indoapril); 
                    }else if(menu == 4){
                         system("cls");
                         printf("\nKamu dalam Mode Delete Barang \n");
                         delete(indoapril);
                    }else if(menu == 5){
                        system("cls");
                        printf("\nKamu dalam Mode Pelayanan Pembayaran \n");
                        beli(indoapril);
                        bayar();
                    }else{
                        system("cls");
                        printf("\nTulung wes Gede Guyone sing Apik\n"); 
                    }
                //Pegawai
                }else{  
                    //system("cls");
                    printf("\nMenu Kasir Toko IndoApril\nMode : Pegawai\n1. Pembayaran\n");
                    beli(indoapril);
                    bayar(); 
                    //system("cls");
                }
            //Tempat Loop  
            printf("\n=======================================================================================");
            printf("\nKetik S Untuk Keluar Aplikasi : ");
            scanf("%s", &oke);
            system("cls"); 
            }
        }else{
            printf("\nKamu Belum Login\n");
        }
}

void logout(){
    SESSION = 0;
}

int main()
{
    //SESSION = 0; // AKTIFKAN JIKA INGIN AUTO LOGIN
    //tahta = 1; // AKTIFKAN JIKA INGIN AUTO LOGIN SEBAGAI PEMILIK TOKO, ISI ANGKA 0 JIKA INGIN AUTO LOGIN SEBAGAI PEGAWAI BIASA
    login(); //NON-AKTIFKAN JIKA INGIN AUTOLOGIN
    menu();
}