#include <stdio.h>
#include <stdlib.h>
.h>
#include <windows.h>

void SetColor(unsigned short);

int main(int argc, char *argv[]) {
SetColor(10);
puts(“Hello World!”);
getch();
fflush(stdin);
return(0);
}

void SetColor(unsigned short color) {
HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsoleOutput,color);
}

