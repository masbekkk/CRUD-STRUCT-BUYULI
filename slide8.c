#include <stdio.h>
int main()
{
    int n = 5, brs, kol, sum;
  // int array[brs][kol];
    for(int brs=0; brs<n; brs++){
        for(int kol=0; kol<n; kol++){
           if(kol>brs){
               int array[brs][kol];
               sum=+array[brs][kol];

           }
           print("%d", 1*sum);
            //  printf("* ");
            // if(kol==n){
            //     printf(" ");
            // }
            
        }
        // for(kol=1; kol<n; kol++){
           // printf(" *");
       printf("\n");
        // }
    }
    return 0;
    

}