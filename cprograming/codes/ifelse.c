/* Basit bir if else kullanımı */
#include <stdio.h>
int main()
{
int a;
printf("Bir sayı giriniz:\n");
scanf("%d",&a);
if(a<5)
{
    printf("Girdiğiniz sayı 5'ten küçük.\n");
}
else if (a>5)
{
    printf("Girdiğiniz sayı 5'ten büyük.\n");
}
else
{
    printf("Girdiğiniz sayı: 5\n");
}
return 0;
}
