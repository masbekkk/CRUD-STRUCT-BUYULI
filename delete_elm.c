#include <stdio.h>
#define MAX_SIZE 100
int arr[100];
int size = 5;
void CreateData()
{
    int i;
    size_t t;
    
    /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < size ; i++ ) {
        arr[i] = rand() % 100;
        //printf("Array random sebelum penyisipan \n");
        printf("%d ", arr[i]);
       // printf("array random [10] : {%d} ", data[i]);
   }
}
int main()
{
    int arr[MAX_SIZE];
    int i, pos;
    CreateData();
    
    /* Input element position to delete */
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);


    /* Invalid delete position */
    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        /* Copy next element value to current element */
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
        size--;

        /* Print array after deletion */
        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}