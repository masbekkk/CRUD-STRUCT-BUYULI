#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[50];
    char str2[50];
   
   
    printf("Masukkan String 1 : ");
    scanf(" %s", &str1);

    printf("Masukkan String 2 : ");
    scanf(" %s", &str2);
    puts(str1);
    
    // printf("String 1 after reverse is %s\n", strrev(str1));

    printf("Result of string 1(reverse) and string 2 = %s\nHasil String 1 = %s\n", strcat(str1,str2), str1);

    puts(str1);
    
    // printf("String 1 after reverse is %s\n", strrev(str1));
    return 0;

}