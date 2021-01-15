#include <stdio.h>
int return() {

    int a[3]={1,2,3};
    return a;
}
int main() 
{
    printf("%d", return(a));
    return 0;
}