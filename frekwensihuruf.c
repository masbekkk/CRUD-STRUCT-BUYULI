#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int frekuensi[5];
int data[10];
char nilaiHuruf[10];
int n = 10;
void createData(int N) {
    int i;
    time_t t;

    /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < N ; i++ ) {
        data[i] = rand() % 60 + 40;
        //data[i] = rand() % 100;
   }
}
void cetakArray(int arr[], int N) {
    int i;

    printf("\n");
    for( i = 0 ; i < N ; i++ ) {
       printf("%d ", arr[i]);
    }
}
void cetakArrayChar() {
    int i;

    printf("\n");
    for( i = 0 ; i < n ; i++ ) {
       printf("%c ", nilaiHuruf[i]);
    }
}
void hitungFrekuensi() {
    int i;
    
    for( i = 0 ; i < 5 ; i++ ) {
        frekuensi [i] = 0;
    }
    for( i = 0 ; i < n ; i++ ) {
       if(nilaiHuruf [i] == 'A')
            frekuensi[0] = frekuensi[0] + 1;
       else if(nilaiHuruf [i] == 'B')
            frekuensi[1] = frekuensi[1] + 1;
        else if(nilaiHuruf [i] == 'C')
            frekuensi[2] = frekuensi[2] + 1;
       else if(nilaiHuruf [i] == 'D')
            frekuensi[3] = frekuensi[3] + 1;
       else if(nilaiHuruf [i] == 'E')
            frekuensi[4] = frekuensi[4] + 1; 
            
    }
}
char nilaiToHuruf(int x)
{

	if(x>=0 && x<=40) {
	   return 'E';
	} else if(x >= 41 && x<=55) {
	    return 'D';
	} else if(x >= 56 && x<=65) {
	    return 'C';
	} else if(x >= 66 && x<=80) {
		return 'B';
	} else if(x>81 && x<=100) {
	    return 'A';
	} else {
		printf("Bilangan di luar range!");
	}
}
void ubahNilaiToHuruf() {

    int i;
    for( i = 0 ; i < n ; i++ ) {
      nilaiHuruf[i] = nilaiToHuruf(data [i]);
       
    }
}
int main ()
{
    createData(10);
    cetakArray(data,10);
    ubahNilaiToHuruf();
    cetakArrayChar();
    hitungFrekuensi();
    cetakArray(frekuensi,5);
}