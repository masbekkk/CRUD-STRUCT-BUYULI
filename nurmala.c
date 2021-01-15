#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //DATA PEMILIH
    int nik_pemilih1=9876545; 
    int nik_pemilih2=9876546; 
    int nik_pemilih3=9876547; 
    int nik_pemilih4=9876548; 
    int nik_pemilih5=9876549; 
    int nik_pemilih6=9876551; 
    int nik_pemilih7=9876552; 
    int nik_pemilih8=9876553; 
    int nik_pemilih9=9876554; 
    int nik_pemilih10=9876555; 
    char *nama_pemilih1 ="Abdul Aziz";
    char *nama_pemilih2 = "Fathan Putra";
    char *nama_pemilih3 = "Sinta Permata";
    char *nama_pemilih4 = "Ramang Saputra";
    char *nama_pemilih5 = "Krisna Dwi";
    char *nama_pemilih6 = "Zelda Putri";
    char *nama_pemilih7 = "Reza Bayu";
    char *nama_pemilih8 = "Thessa Fitria";
    char *nama_pemilih9 = "Anis Mujiati";
    char *nama_pemilih10 = "Bagas Loker";

    //DATA KANDIDAT 1
    char *Nama_kand1   = "As’ad Ulil Albab";
    char *No_KTP_kand1 = "9876542";
    char *Kelas_kand1  = "XI MIPA 1";
    char *Umur_kand1   = "17";
    char *Visi_kand1   = "Menjadikan PK-OSIS SMAN 1 Cerme sebagai organisasi yang mampu berkoordinasi ( bekerja sama) dalam hal pengembangan kompetensi siswa di segala bidang yang unggul dalam pengetahuan, pendidikan karakter dan beragama";
   
    //DATA KANDIDAT 2
    char *Nama_kand2     = "Rizky Maulana";
    char *No_KTP_kand2   = "9876543";
    char *Kelas_kand2	 = "XI IPS 3";
    char *Umur_kand2	 = "17";
    char *Visi_kand2	 = "Mewujudkan generasi muda yang berakhlak, disiplin, peduli dan terampil";
    
    //DATA KANDIDAT 3
    char *Nama_kand3	 = "Noval Apriliansyah";
    char *No_KTP_kand3   = "9876544";
    char *Kelas_kand3	 = "XI MIPA 7";
    char *Umur_kand3	 = "16";
    char *Visi_kand3	 =  "Membentuk individu kreatif, berguna, serta unggul di bidang IPTEK dan IMTAQ";

    int a=0, b=0, c=0, i, jumlah_pemilih = 10;
    int nik, no_urut, temp=0, terbesar;
    //OPENING
    //MEMILIH
    
    for(i=1; i<=jumlah_pemilih; i++){
        printf("========================================================================\n");
        printf("Pemilihan Umum Ketua OSIS SMAN 1 Cerme 2021/2022\n\t\tGresik\n");
        printf("Selamat datang di Pesta Demokrasi SMAN 1 Cerme\nSebagai awal pergantian kepengurusan OSIS SMAN 1 Cerme akan diadakan Pemilihan Ketua OSIS SMAN 1 Cerme\n");
       
        printf("Masukkan NIK :");
        scanf("%d", &nik);
        if(nik != temp){
            // SESSION = 1;
            if(nik == nik_pemilih1){
                printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih1);
                printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                printf("----------------------------------------------------------\n");
                printf("----------------------------------------------------------\n");
                printf("Kandidat Nomor Urut 1\n");
                printf("------------------------\n");
                printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                printf("----------------------------------------------------------\n");
                printf("----------------------------------------------------------\n");
                printf("Kandidat Nomor Urut 2\n");
                printf("------------------------\n");
                printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                printf("----------------------------------------------------------\n");
                printf("----------------------------------------------------------\n");
                printf("Kandidat Nomor Urut 3\n");
                printf("------------------------\n");
                printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                printf("-----------------------------------------------------------\n");
                printf("-----------------------------------------------------------\n");
                while(1){
                    printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                    scanf("%d", &no_urut);
                    if(no_urut == 1){
                        a++;
                        system("cls");
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih1);
                        temp = nik;
                        break;
                    }else if(no_urut == 2){
                        b++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih1);
                        temp = nik;
                        system("cls");
                        break;
                    }else if(no_urut == 3){
                        c++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih1);
                        temp = nik;
                        system("cls");
                        break;
                    }else
                    {
                        printf("Nomor urut yang kamu masukkan tidak benar, Masukkan Nomor urut yang benar"); 
                    }
                }
                }else if(nik == nik_pemilih2){
                    printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih2);
                    printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 1\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 2\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 3\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                    printf("-----------------------------------------------------------\n");
                    printf("-----------------------------------------------------------\n");
                while(1){
                    printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                    scanf("%d", &no_urut);
                    if(no_urut == 1){
                        a++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih2);
                        temp = nik;
                        system("cls");
                        break;
                    }else if(no_urut == 2){
                        b++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih2);
                        temp = nik;
                        system("cls");
                        break;
                    }else if(no_urut == 3){
                        c++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih2);
                        temp = nik;
                        system("cls");
                        break;
                    }else
                    {
                        printf("Nomor urut yang kamu masukkan tidak benar, Masukkan Nomor urut yang benar"); 
                    }
                } 
                }else if(nik == nik_pemilih3){
                    printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih3);
                    printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 1\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 2\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 3\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                    printf("-----------------------------------------------------------\n");
                    printf("-----------------------------------------------------------\n");
                    while(1){
                        printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                        scanf("%d", &no_urut);
                        if(no_urut == 1){
                            a++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih3);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 2){
                            b++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih3);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 3){
                            c++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih3);
                            temp = nik;
                            system("cls");
                            break;
                        }else
                        {
                            printf("Nomor urut yang kamu masukkan tidak benar, Masukkan Nomor urut yang benar"); 
                        }
                    }
                }else if(nik == nik_pemilih4){
                    printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih4);
                    printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 1\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 2\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 3\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                    printf("-----------------------------------------------------------\n");
                    printf("-----------------------------------------------------------\n");
                while(1){
                    printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                    scanf("%d", &no_urut);
                    if(no_urut == 1){
                        a++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih4);
                        temp = nik;
                        system("cls");
                        break;
                    }else if(no_urut == 2){
                        b++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih4);
                        temp = nik;
                        system("cls");
                        break;
                    }else if(no_urut == 3){
                        c++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih4);
                        temp = nik;
                        system("cls");
                        break;
                    }else
                    {
                        printf("Nomor urut yang kamu masukkan tidak benar, Masukkan Nomor urut yang benar"); 
                    }
                }
                }else if(nik == nik_pemilih5){
                    printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih1);
                    printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 1\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 2\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 3\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                    printf("-----------------------------------------------------------\n");
                    printf("-----------------------------------------------------------\n");
                while(1){
                    printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                    scanf("%d", &no_urut);
                    if(no_urut == 1){
                        a++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih5);
                        temp = nik;
                        system("cls");
                        break;
                    }else if(no_urut == 2){
                        b++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih5);
                        temp = nik;
                        system("cls");
                        break;
                    }else if(no_urut == 3){
                        c++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih5);
                        temp = nik;
                        system("cls");
                        break;
                    }else
                    {
                         printf("no_urut yang kamu masukkan tidak benar, Masukkan no_urut yang benar"); 
                    }
                }
                }else if(nik == nik_pemilih6){
                    printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih6);
                    printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 1\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 2\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 3\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                    printf("-----------------------------------------------------------\n");
                    printf("-----------------------------------------------------------\n");
                    while(1){
                    printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                    scanf("%d", &no_urut);
                    if(no_urut == 1){
                        a++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih6);
                        temp = nik;
                        system("cls");
                        break;
                    }else if(no_urut == 2){
                        b++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih6);
                        temp = nik;
                        system("cls");
                        break;
                    }else if(no_urut == 3){
                        c++;
                        printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih6);
                        temp = nik;
                        system("cls");
                        break;
                    }else
                    {
                        printf("Nomor urut yang kamu masukkan tidak benar, Masukkan Nomor urut yang benar"); 
                    }
                    }
                }else if(nik == nik_pemilih7){
                    printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih7);
                    printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 1\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 2\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 3\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                    printf("-----------------------------------------------------------\n");
                    printf("-----------------------------------------------------------\n");
                    while(1){
                        printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                        scanf("%d", &no_urut);
                            if(no_urut == 1){
                            a++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih7);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 2){
                            b++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih7);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 3){
                            c++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih7);
                            temp = nik;
                            system("cls");
                            break;
                        }else
                        {
                             printf("Nomor urut yang kamu masukkan tidak benar, Masukkan Nomor urut yang benar"); 
                        }
                }
                }else if(nik == nik_pemilih8){
                    printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih8);
                    printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 1\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 2\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 3\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                    printf("-----------------------------------------------------------\n");
                    printf("-----------------------------------------------------------\n");
                    while(1){
                        printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                        scanf("%d", &no_urut);
                        if(no_urut == 1){
                            a++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih8);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 2){
                            b++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih8);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 3){
                            c++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih8);
                            temp = nik;
                            system("cls");
                            break;
                        }else
                        {
                             printf("Nomor urut yang kamu masukkan tidak benar, Masukkan Nomor urut yang benar"); 
                        }
                    }
                }else if(nik == nik_pemilih9){
                    printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih9);
                    printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 1\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 2\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 3\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                    printf("-----------------------------------------------------------\n");
                    printf("-----------------------------------------------------------\n");
                    while(1){
                        printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                        scanf("%d", &no_urut);
                        if(no_urut == 1){
                            a++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih9);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 2){
                            b++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih9);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 3){
                            c++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih9);
                            temp = nik;
                            system("cls");
                            break;
                        }else
                        {
                            printf("Nomor urut yang kamu masukkan tidak benar, Masukkan Nomor urut yang benar"); 
                        }
                    }
                }else if(nik == nik_pemilih10){
                    printf("Halo %s, Yuk Gunakan Hak Pilihmu!", nama_pemilih10);
                    printf("\nBerikut Adalah Nama - Nama Kandidat Beserta Visi Misinya\n");
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 1\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand1, Visi_kand1);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 2\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand2, Visi_kand2);
                    printf("----------------------------------------------------------\n");
                    printf("----------------------------------------------------------\n");
                    printf("Kandidat Nomor Urut 3\n");
                    printf("------------------------\n");
                    printf("Nama : %s\nVisi : %s\n", Nama_kand3, Visi_kand3);
                    printf("-----------------------------------------------------------\n");
                    printf("-----------------------------------------------------------\n");
                    while(1){
                        printf("\n\nMasukkan Nomor Urut Kandidat yang Akan Kamu Pilih : ");
                        scanf("%d", &no_urut);
                        if(no_urut == 1){
                            a++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih10);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 2){
                            b++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih10);
                            temp = nik;
                            system("cls");
                            break;
                        }else if(no_urut == 3){
                            c++;
                            printf("Terimakasih Telah menggunakan hak suaramu wahai %s\n\n", nama_pemilih10);
                            temp = nik;
                            system("cls");
                            break;
                        }else
                        {
                             printf("Nomor urut yang kamu masukkan tidak benar, Masukkan Nomor urut yang benar"); 
                        }
                    }
                }else{
                    printf("NIK mu Salah atau tidak terdaftar\n");
                    jumlah_pemilih++;
                    system("cls");
                }
        }else{
            printf("kamu sudah memilih\n");
            jumlah_pemilih++;
            system("cls");
        }        
    }
    
    //MENGURUTKAN HASIL DARI YANG TERBESARs
    terbesar = a;
    if(b > terbesar){
        terbesar = b;
    }
    if(c > terbesar){
        terbesar = c;
    }
  
    //PEMENANG 
    if(terbesar == a){
        printf("\t\t\t\t\tSelamat\nKandidat dengan No Urut 1 Atas Nama %s Terpilih Menjadi Ketua OSIS SMAN 1 Cerme\nDengan Total Perolehan Suara = %d dari %d Suara Pemilih dan Hasil dari Kandidat 2 = %d dan Hasil Kandidat 3 = %d\nSemoga bisa amanah dan menjadikan SMAN 1 Cerme lebih baik lagi", Nama_kand1, a,a+b+c, b, c);
    }else if(terbesar == b){
       printf("\t\t\t\t\tSelamat\nKandidat dengan No Urut 2 Atas Nama %s Terpilih Menjadi Ketua OSIS SMAN 1 Cerme\nDengan Total Perolehan Suara = %d dari %d Suara Pemilih dan Hasil dari Kandidat 1 = %d dan Hasil Kandidat 3 = %d\nSemoga bisa amanah dan menjadikan SMAN 1 Cerme lebih baik lagi", Nama_kand2, b,a+b+c, a, c);
    }else if(terbesar == c){
       printf("\t\t\t\t\tSelamat\nKandidat dengan No Urut 3 Atas Nama %s Terpilih Menjadi Ketua OSIS SMAN 1 Cerme\nDengan Total Perolehan Suara = %d dari %d Suara Pemilih dan Hasil dari Kandidat 1 = %d dan Hasil Kandidat 2 = %d\nSemoga bisa amanah dan menjadikan SMAN 1 Cerme lebih baik lagi", Nama_kand3, c,a+b+c, a, b);
    }
    return 0;
}
