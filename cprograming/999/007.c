/* Dışarıdan girilen sayıya kadar olan sayıların aritmetik ortalamasını bulan kod */

#include <stdio.h>

int main()
{

    int a,b;
    int toplam = 0;

    printf("Bir sayı giriniz -> ");
    scanf("%d",&a);
    b = a;

    while (a > 0)
    {
        toplam = toplam + a;
        a--;
    }

    printf("Aritmetik ortalama -> %d\n",toplam/b);

    return 0;

}
