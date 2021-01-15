#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[50] = "aku makan nasi"; 
    char  str2[50];
    char str3[50]=" lagi ";
    char str4[50];
    char * hasil; 
    
    printf("Original String: %s\n", str); 
    hasil = strstr(str,"makan"); //mencari string "makan"
    strcpy(str2, hasil);
    puts(str2);
    strcat(str3, str2);
    strncpy(str4,str,hasil-str-1); //mengcopy ke str4, 
    strcat(str4, str3);
    puts(str4);

    return 0; 
}