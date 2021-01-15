#include <stdio.h>
#include <stdlib.h>
int N = 20;
int data[20];
void createData() {
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

int main()
{
    createData();
}