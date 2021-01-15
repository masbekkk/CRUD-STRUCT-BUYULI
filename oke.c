#include <stdio.h>
#include <string.h>

int main()
{
    
    char string[50];
    char *temp;
    char *inputs;
    printf("Masukkan kalimat : ");
    scanf(" %s", string);
    puts(string);
    printf("Masukkan kata atau huruf dari kalimat diatas untuk menemukan indexnya : ");
    scanf(" %s", inputs);


    temp = strstr(string, inputs);
    puts("Terletak pada index :");
    while(temp!=NULL) {
        printf("%ld\n", temp-string);
        temp = strstr(temp+1, inputs);
    }
}
