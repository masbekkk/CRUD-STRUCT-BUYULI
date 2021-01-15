#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int N = 5;
int data[10];
void CreateData()
{
    int i;
    time_t t;
    
    /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < N ; i++ ) {
        data[i] = rand() % 100;
        //printf("Array random sebelum penyisipan \n");
        printf("%d ", data[i]);
       // printf("array random [10] : {%d} ", data[i]);
   }
}
void sisipArray(int pos, int num)
{
    int i=0;
    if(pos > N+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", N);
    }
    else
    {
        /* Make room for new array element by shifting to right */
        for(i=N; i>=pos; i--)
        {
            data[i] = data[i-1];
        }
        /* Insert new element at given position and increment size */
        data[pos-1] = num;
        N++; 
        /* Print array after insert operation */
        printf("Array elements after insertion : \n");
        for(i=0; i<N; i++)
        {
            printf("%d\n", data[i]);
        }
    }
}
int main()
{
   int pos, num;
   CreateData();
   
   /*MENYISIPKAN POSISI DALAM ARRAY*/
   printf("\nmasukkan posisi array : ");
   scanf(" %d", &pos);

   /* MENYISIPKAN ANGKA PADA ARRAY POSISI TERTENTU */
   printf("\nmasukkan angka :  ");
   scanf(" %d", &num);
   sisipArray(pos, num);
}