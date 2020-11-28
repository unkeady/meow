/* Dışarıdan girilen 2 sayının toplamını veren c programı */

#include <stdio.h>

int main()
{

    int a, b;

    printf("İlk sayiyi giriniz.\n-> ");
    scanf("%d",&a);
    printf("İkinci sayiyi giriniz.\n-> ");
    scanf("%d",&b);
    printf("İki sayinin toplami -> %d\n", a + b);

    return 0;

}
