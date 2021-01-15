#include <stdio.h>
int main() 
{
    int i,n =5, tab[n];
    for(i=0; i < n; i++){
        scanf(" %d", &tab[i]);
    }
    for(i=0; i < n; i++) {
        printf(" tab[%d] = %d \n", i, tab[i]);
    }
}