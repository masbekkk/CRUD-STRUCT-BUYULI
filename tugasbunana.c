#include<stdio.h>
#include<string.h>

void main() {
	char str1[30] = "Tpo";
	char str2[30] = "oCder";
	char strHasil[60];
	int i;
	
	for(i=0; i<30; i++) {
		strncat(strHasil, str1 + i, 1);
		strncat(strHasil, str2 + i, 1);
	}
	
	printf("%s", strHasil);
}