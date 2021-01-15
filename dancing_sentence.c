#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "dancing sentence";
    char *hasil;
    int i;
    //SET KECIL SEMUA DULU BIAR GAMPANG
   strlwr(str); 
   //BARU MASUK LOOP KEMUDIAN DIGANTI SESUAI ALGORITMA BIL.GANJIL
    for(i=0; i<=strlen(str); i=i+2) {
       hasil = strupr(str[i]);
    }
    
    printf("%s \n", hasil);
}