#include <stdio.h>
int main()
{
    int i, coba[5] = {1,2,3,4,5};
    //printf("%d", coba[2]);
    for(i=0; i< 5; i++) {
        printf("coba [%d] =  %d",coba[i-1], coba[i]);
        printf("\n");
    }
    
    return 0;
}
