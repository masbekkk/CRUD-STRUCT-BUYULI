#include <stdio.h>
void tukar(int *a, int *b);
int main(){
    int a=5, b=3;
    printf("Sebelum pemanggilan fungsi\n");
    printf("a=%d, b=%d\n", a, b);
    tukar(&a, &b);
    //tukar2(a, b);
    printf("Sesudah pemanggilan fungsi\n");
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
void tukar(int *a, int *b){
    int c ;
    c = *a ;
    *a = *b;
    *b = c ;
    printf("Hasil di dalam fungsi\n");
    printf("a=%d, b=%d\n", *a, *b);
}
void tukar2(int a, int b){
    int c ;
    c = a ;
    a = b;
    b = c ;
    printf("Hasil di dalam fungsi\n");
    printf("a=%d, b=%d\n", a, b);
}