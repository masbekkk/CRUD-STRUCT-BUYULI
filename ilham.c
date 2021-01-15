#include <stdio.h>
int main()
{
int a=5,b=3,c=1,d=2,e=4,total=0, maksimum, minimum;
if(a<b || a<c || a<d || a<e) {
    total = b+c+d+e;
 if(b<a || b<c || b<d || b<e) {
    total = a+c+d+e;    
 }
 if (c<a || c<b || c<d || c<e) {
    total = a+b+d+e;
 }
 if(d<a || d<b || d<c || d<e) {
    total = a+b+c+e;
 }
 if (e<a || e<b || e<c || e<d) {
    total = a+b+c+d;
}
}
printf("MEMBANDINGKAN JUMLAH YANG TERBESAR DAN YANG TERKECIL\n");
printf("OUTPUT %d \n", total);
}