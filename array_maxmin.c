#include <stdio.h>
int main()
{
    int i=0, max,min,mean=0,n=7,a=0, median=0;
    int tab[7] = {1,1000,500,4,3000, 3000, 3000};
    do {
        //mean =tab[i-1]+tab[i];
        mean+=tab[i];
       // median = tab[i-1]+tab[i];
        max = tab[0];
        min = tab[0];
        if (tab[i] > max){
            max = tab[i];}
            if(tab[i] < min){
                min = tab[i];
            }
            i++;
        }while(i < n);
       
printf(" %d\n", max);
printf(" %d\n", min);
printf(" %d\n", mean/n);
printf(" %d\n %d", (min+max)/2, a);
}