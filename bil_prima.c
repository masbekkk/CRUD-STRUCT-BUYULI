#include<stdio.h>
int main() {
 int bilangan, i, c ;
 
 printf("\nMasukkan bilangan: ");
 scanf("%d", &bilangan);
 
 if(bilangan <= 1) {
  printf("Masukkan angka lebih dari 1.");
 }else{
  if(bilangan == 2){
   printf("%d merupakan bilangan prima.", bilangan);
  }else{
   for(i=2; i<bilangan; i++){
    if(bilangan %angka == 0){
     c = 0;
     break;
    }else{
     c = 1;
    }
   }
   
   if(c == 0){
    printf("%d merupakan bukan bilangan prima.\n", bilangan);
   }else{
    printf("%d merupakan bilangan prima.", bilangan);
   }
  }
 }
}