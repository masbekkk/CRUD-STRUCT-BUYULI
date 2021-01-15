#include <stdio.h>
int a[10], n=5;
int CreateData()
{
    int i;
    size_t t;
    
    /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n; i++ ) {
        a[i] = rand() % 100;
        //printf("Array random sebelum penyisipan \n");
        printf("%d \n", a[i]);
       // printf("array random [10] : {%d} ", data[i]);
   }
}
int main()
{
puts("before sorting :");
CreateData();
int i, j, position, swap;

for(i = 0; i < n - 1; i++)
{
position=i;
for(j = i + 1; j < n; j++)
{
if(a[position] > a[j])
position=j;
}
if(position != i)
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
}
}

printf("Sorted Array:\n");
for(i = 0; i < n; i++)
printf("%d\n", a[i]);
return 0;
}