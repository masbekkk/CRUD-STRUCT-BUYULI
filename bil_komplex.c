#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;
complex K1 = {3,5};
complex K2 = {10,7};
complex K3 = {2, 3};

complex add(complex n1, complex n2, complex *hasil)
{
    // complex hasil; 
    hasil.real = n1.real + n2.real ;
    hasil.imag = n1.imag + n2.imag ; 
    // return hasil ;
}

complex min(complex n1, complex n2)
{
    complex hasil; 
    hasil.real = n1.real - n2.real ;
    hasil.imag = n1.imag - n2.imag ; 
    return hasil ;
}

complex multi(complex n1, complex n2)
{
    complex hasil ;
    hasil.real = n1.real*n2.real - n1.imag*n2.imag ;
    hasil.imag = n1.imag*n2.real + n1.real*n2.imag ;
    return hasil ;
}

void cetak(complex c)
{
    printf("(%.1f,%.1f)\n",c.real,c.imag) ;

}


int main()
{
    // complex c1 = {3,5} ;
    // complex c2 = {10,2} ;
    cetak(K1) ; 
    cetak(K2) ;  
    complex hasil = add(K1,K2) ;
    printf("hasil penjumlahan :\n") ;
    cetak (hasil) ;
    printf("hasil pengurangan :\n");
    cetak (min(K1,K2)) ;
    printf("hasil perkalian : \n");
    cetak (multi(K1,K2)) ;
    
}
