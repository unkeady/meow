/* Eksi bir girilene kadar sayıları topla */
#include <stdio.h>
int main()
{   
int a = 0;
int toplam = 0;
while (a != -1)
{
scanf("%d",&a);
toplam = toplam + a;
}
printf("Girilen sayıların toplamı: %d",toplam+1);
return 0;
}
