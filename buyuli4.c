#include <stdio.h>
void fung_1(void);
main(){
    int i = 20;
    fung_1();
    printf("nilai i di dalam main() = %d\n", i);
}
void fung_1(void) {
    int i = 11;
    printf("nilai i di dalam fung_1() = %d\n", i);
}