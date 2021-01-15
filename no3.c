#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[50] = "foto copy keputih"; 
    char *set;
    set =strstr(str, "copy");
    strncpy(set, "ssss", 4);
    puts(str);
    
    return 0; 
}