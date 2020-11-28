/* 2 kenarı verilen dik üçgenin 3. kenarını bulan c programı (math.h) */

#include <stdio.h>
#include <math.h>

int main()
{

int a,b;

printf("1. kenarı giriniz -> ");
scanf("%d",&a);
printf("2. kenarı giriniz -> ");
scanf("%d",&b);

int c;

c = a*a + b*b;
double d;

d = sqrt(c);


printf("3. kenar uzunluğu: %.2f \n",d);

return 0;

}
