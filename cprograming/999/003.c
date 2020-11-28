/* N sayısına kadar olan sayıların toplamını veren c programı */

#include <stdio.h>

int main()
{

    int a;
    int toplam = 0;

    printf("Hangi sayiya kadar olan sayilarin toplamini bulmak istiyorsun?\n");
    scanf("%d",&a);

    while(a > 0)
    {
        toplam = toplam + a;
        a--;
    }

    printf("Sayilarin toplami -> %d\n", toplam);

    return 0;

}
