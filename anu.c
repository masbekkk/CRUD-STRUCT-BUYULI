#include <stdio.h>
#include <stdlib.h>

int data[10];
int dataA[10];
int dataB[10];
int n = 20, iA=0, iB=0;

void createData(int N) {
    int i;
    time_t t;
    
    /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < N ; i++ ) {
        data[i] = rand() % 50;
        //printf("%d ", data[i]);
   }
} 

void bagiData() {
    int i;
    
    for( i = 0 ; i < n ; i++ ) {
       if (data[i]%2 == 1){
           dataA[iA] = data[i];
           iA++;
       } else {
           dataB[iB] = data[i];
           iB++;
       }

   }
}

void cetakArray(int arr[], int N) {
    int i;
    
    printf("\n");
    for( i = 0 ; i < N ; i++ ) {
       printf("%d ", arr[i]);
    }
}

void cetakArrayDataA() {
    int i;
    printf("\n");
    for( i = 0 ; i < iA ; i++ ) {
       printf("%d ", dataA[i]);
    }
}

int main () {
   int i;
   
   createData(10);
   bagiData();
   cetakArray(data, 10);
   cetakArray(dataA, iA);
   cetakArray(dataB, iB);
   //cetakArrayDataA();
  
   return(0);
}