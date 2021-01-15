#include <stdio.h>
int main()
{
    int i, n=5, rand[n];
    for(i=0; i<n; i++) {
         scanf(" %d", &rand[n]);
    }
    for (i=0; i<=n; i++) {
        if(i%2==0) {
            int genap = i;
            printf(" bilangan genap yg terdapat dalam array adalah : %d\n", i);
        }else {
            int ganjil = i;
             printf(" bilangan ganjil yg terdapat dalam array adalah : %d\n", i);
        }
    }
}