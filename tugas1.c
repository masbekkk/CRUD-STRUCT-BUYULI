#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define N 10;
int data[10];
int createData(int N) {
    int i;
    time_t t;
    
    /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < N ; i++ ) {
        data[i] = rand() % 100;
        //printf("%d \n", data[i]);
   }
} 
int sisipArray(int pos, int num) {
    int i;
    if(pos > N+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", N;
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
       
    }
}
int main()
{
    createData(10);
    sisipArray(2, 4);
    int i;
     printf("Array elements after insertion : ");
        for(i=0; i<N; i++)
        {
            printf("%d\t", data[i]);
        }
}