#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[50] = "aku makan nasi"; 
    char  str2[50];
    char str3[50]="lagi ";
    char str4[50];
    char * hasil; 
    char * hasil2;
    printf("Original String: %s\n", str); 
    hasil = strstr(str,"makan"); 
    strcpy(str2, hasil);
    puts(str2);
    strcat(str3, str2);
    strncpy(str4,str,hasil-str-1);
    strcat(str4, str3);
    (str4);

   // printf("hasil akhir : %s\n", str3);
    // First 5 character of string str 
    // replaced by character '*' 
    //strncat(hasil, "study", 5);
   // printf("Modified String: %s\n",str2); 
     
    return 0; 
}