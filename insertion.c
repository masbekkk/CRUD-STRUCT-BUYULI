#include <stdio.h>
int N = 5;
int data[10];
void CreateData()
{
    int i;
    size_t t;
    
    /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < N ; i++ ) {
        data[i] = rand() % 100;
        //printf("Array random sebelum penyisipan \n");
        printf("%d \n", data[i]);
       // printf("array random [10] : {%d} ", data[i]);
   }
}
int main() {
    int i, tmp, j=1;
    CreateData();
    for(i=1; i<N; i++) {
        while(data[j] < data[j-1]) {
            tmp = data[j];
            data[j] = data[j-1];
            data[j-1] = tmp;
            j--;
        }
    }
    puts("setelah sorting :");
    for(i=0; i<N; i++) {
        printf("%d \n", data[j]);
    }
}