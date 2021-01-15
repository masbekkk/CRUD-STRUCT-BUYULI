#include <stdio.h>
int nrp[27]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
int n=27;
void CreateData()
{
    int i, j;
    size_t t;
    
    /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0; i < n; i++) {
        nrp[i] = rand();
        printf("%d\n",nrp[i]);
   }
}
int main()
{
    CreateData();
}