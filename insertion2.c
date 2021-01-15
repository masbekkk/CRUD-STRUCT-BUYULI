#include <stdio.h>
int n=5;
int array[10];
int CreateData()
{
    int i;
    size_t t;
    
    /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n; i++ ) {
        array[i] = rand() % 100;
        //printf("Array random sebelum penyisipan \n");
        printf("%d, ", array[i]);
       // printf("array random [10] : {%d} ", data[i]);
   }
}
int main()
{
  puts("before sorting :");
  CreateData();
  int c, d, t, flag = 0;
  for (c = 1 ; c <= n - 1; c++) {
    t = array[c];

    for (d = c - 1 ; d >= 0; d--) {
      if (array[d] > t) {
        array[d+1] = array[d];
      //  flag = 1;
      }
      else
        break;
    }
    //if (flag)
      array[d+1] = t;
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }

  return 0;
}