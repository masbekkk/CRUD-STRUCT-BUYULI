#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 5;
    int j = 10;
    int k = 15;
    joe(&i, &j, j + i);
    printf("%d, %d, %d\n", i, j, k);
    return 0;
}
void joe(int *a, int *b, int c)
{
    *a = *b + c;
    *b = c + 1;
    printf("\n%d, %d, %d\n",*a, *b, c);
}