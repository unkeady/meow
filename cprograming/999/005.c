/* Dışarıdan girilen n sayısına kadar olan tek sayıların toplamını bulan program */

#include <stdio.h>

int main()
{

    int n;
    int toplam = 0;

    printf("N sayısını giriniz -> ");
    scanf("%d",&n);

    while(n > 0)
    {
        if(n%2 == 1)
        {
            toplam = toplam + n;
        }
    n--;
    }

    printf("Toplam -> %d\n",toplam);

    return 0;

}
