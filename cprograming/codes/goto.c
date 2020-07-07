#include <stdio.h>
int main()
{
int a = 0;
while (a<10)
{
    if(a>5)
    {
        goto xd;
    }
     a++;
}
xd: 
printf("%d\n",a);
return 0;
}
