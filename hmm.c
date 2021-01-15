#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "abbaabaaabbaba";
  char * pch;
  printf ("Looking for the 'abb' character in \"%s\"...\n",str);
  pch=strstr(str,"abb");
  puts(pch);
  while (pch!=NULL)
  {
    printf ("found at %ld\n",pch-str);
    pch=strstr(pch+1,"abb");
   // puts(pch);
  }
  return 0;
}