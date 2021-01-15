#include <stdio.h>
int main()
{
    int temp, k, i,max,n=7, tab[7] = {1,1000,500,4,3000, 3000, 3000};
    for (i =0; i < n-1; i++) {
       max = i;
       for(k = i+1; k < n; k++){ 
        if(tab[k] < tab[max]) {
            max = k;
        }
       }
       temp = tab[i];
       tab[i] = tab[max];
       tab[max] = temp;
    }
    for(i=0; i<n; i++) {
        printf(" %d\n", tab[i]);
    }
    
}