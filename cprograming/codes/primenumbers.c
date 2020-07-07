/* Girilen sayının asal olup olmadığını bul */
#include <stdio.h>
int main()
{   
int a;
int b = 2;
int flag = 0;
scanf("%d",&a);
while (b<a-1)
{
    if(a%b==0)
    {
       flag++;
       break;
    }
    
    b++;
}
if(flag==1)
{
    printf("Girilen sayı asal değil.");
}
else
{
    printf("Girilen sayı asaldır.");
}
return 0;
}
