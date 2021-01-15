#include <stdio.h>

typedef struct complex
{
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2)
{
    complex hasil;
    hasil.real = n1.real + n2.real;
    hasil.imag = n1.imag + n2.imag;
    return hasil;
}

void add2(complex n1, complex n2, complex *hasil)
{
    hasil->real = n1.real + n2.real;
    hasil->imag = n1.imag + n2.imag;
}

void  min(complex n1, complex n2, complex *hasil)
{
   
    hasil->real = n1.real - n2.real;
    hasil->imag = n1.imag - n2.imag;
  
}

complex multi(complex n1, complex n2)
{
    complex hasil;
    hasil.real = n1.real * n2.real - n1.imag * n2.imag;
    hasil.imag = n1.imag * n2.real + n1.real * n2.imag;
    return hasil;
}

void cetak(complex c)
{
    printf("(%.1f,%.1f)\n", c.real, c.imag);
}

int main()
{
    complex c1 = {3, 5};
    complex c2 = {10, 2};
    // cetak(c1);
    // cetak(c2);
    // complex hasil = add(c1, c2);
    // printf("hasil penjumlahan :\n");
    // cetak(hasil);

    complex hasil2;
    add2(c1, c2, &hasil2);
    printf("hasil penjumlahan2 :\n");
    cetak(hasil2);
    
   
    min(c1, c2, &hasil2);
    printf("hasil pengurangan c1 dan c2: ");
    cetak(hasil2);

    complex c3 = {13, 2};
   

    min(hasil2, c3, &hasil2);
    printf("hasil kurang c1-c2-c3 : ");
    cetak(hasil2);


    // printf("hasil pengurangan :\n");
    // cetak(min(c1, c2));
    // printf("hasil perkalian : \n");
    // cetak(multi(c1, c2));
}