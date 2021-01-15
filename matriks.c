#include <stdio.h>
int main()
{
    int i,angka,input,p=0,cek;
    
    printf("Masukan angka brapapun dan akhiri program dengan angka 0\n");
    
    while(1) {
        printf("Masukan Angka : ");
        scanf("%d", &input);
        
        // cek angka inputan
        if(input == 0) break;
        else {
            int arr[input][input];
            angka = 1;
            i = input;
            
            // cek baris atau kolom genap ganjil
            if (input % 2 == 0) cek = input / 2;
            else if (input % 2 == 1) cek = (input / 2) + 1;
            
            // Berikan nilai kedalam array
            for (int loop = 1; loop <= cek; loop++) {
                for (int brs = p; brs < i; brs++) {
                    for (int kol = p; kol < i; kol++) {
                        arr[brs][kol] = angka;
                    }
                }
                angka++;
                p++;
                i--;
            }
            
            p = 0;
            // q = 0;
            
            // print matrik
            for (int brs = 0; brs < input; brs++) {
                for (int kol = 0; kol < input; kol++) {
                    printf("%2d", arr[brs][kol]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}