/* Çarpım tablosunu yazan c programı */

#include <stdio.h>

int main()
{

	int a;
	int b;

	for(a = 1; a<=10 ;a++)
	{
		for(b = 1;b <= 10 ; b++)
		{
			if(a*b < 10)
			{
			printf(" %d",a*b);
			}
			else
			{
			printf("%d",a*b);
			}
			printf(" ");
		}

		printf("\n");

	}

return 0;

}
