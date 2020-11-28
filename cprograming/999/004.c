/* Yarıçapı dışarıdan verilen dairenin çevresini ve alanını bulan program */

#include <stdio.h>

#define pi 3.14159265359

int main()
{

    int r;

    printf("Yariçapi giriniz -> ");
    scanf("%d",&r);
    printf("Dairenin çevresi -> %f\nDairenin alanı -> %f\n",2*pi*r,pi*r*r);

    return 0;

}
