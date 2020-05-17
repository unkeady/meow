/* Basit çarpım tablosu */
#include <stdio.h>
int main()
{
int x;
int y;

    for(x=1;x<10;x++)
    {
        for(y=1;y<10;y++)
        {

            if(y*x<10)
            {
                printf(" ");
            }
            printf("%d",y*x);
            
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
