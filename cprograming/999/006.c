/* Girilen n sayısına kadar olan sayıların karelerinin toplamını bulan kod  */
#include <stdio.h>

int main()
{

    int a;
    int toplam = 0;

    printf("Bir sayı giriniz -> ");
    scanf("%d",&a);

    while(a > 0)
    {
        toplam = a*a + toplam;
        a--;
    }

    printf("Girdiğiniz sayı -> %d\n", toplam);

    return 0;

}
