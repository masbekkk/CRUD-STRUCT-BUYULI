#include <stdio.h>
#include <string.h>

int main()
{
char string[50] = "PENS JOSS";
char *cari;
char *set;
int jml;
//puts(string);
jml = strlen(string);
printf("%d", jml);
printf("masukkan huruf atau kata yang ingin kamu cari indexnya: ");
scanf(" %s", cari);

set = strstr(string, cari);

//index = (int)(==e - string);
for(int i = 0; i<=jml; i++){
if(set!=NULL){
printf("index dari %s adalah  %ld\n  ", cari, set-string+1);
set = strstr(set+1, cari);
}
}
}