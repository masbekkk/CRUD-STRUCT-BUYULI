 while(oke != 'S' &&  oke !='s'){ 
    if (SESSION == 1){
       
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
                printf("Kamu dalam Mode Edit Barang \n");
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
            }else{
                //system("cls");
                printf("\nMenu Kasir Toko IndoApril\nMode : Pegawai\n1. Pembayaran\n");
                beli(indoapril);
                bayar();
            }      
        }
        else{
        printf("Kamu Belum Login\n");
        login();  
    }
    }
}