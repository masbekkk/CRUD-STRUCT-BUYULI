#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[50]="senin";
    char str2[50]="selasa";
    
    printf("String 1 after reverse is %s\n", strrev(str1));

    printf("Result of string 1(reverse) and string 2 = %s\n", strcat(str1,str2));
    
    return 0;

}