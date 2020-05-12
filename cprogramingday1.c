#include <stdio.h>
/* #include <conio.h> windows için getch() çalışması için eklenir sadece windowsta çalışır. */
int main() {
	printf("Day 1 start\n");
	//int tam sayı tutar örn 10 %d
	//float ondalıklı sayı ör 3.14 %f
	//double ondalıklı sayı (daha büyük) ör 3.14
	//char tek bir karakter tutar ör a %c
	
	int x;
	printf("enter a nubmer:\n");
	scanf("%d", &x);
	printf("your number is: %d\n", x);
	

	float pi = 3.14;
	printf("%8.4f", pi); //8 karakterlik yer kaplar 4 karakter ondalık sayıdan sonrasını basar.

  int a = 10;
	printf("%d", a);
	{
		int a = 5; //{} arasında olduğu için burada a 5'tir ama {} dışında değeri 10'dur
		printf("%d", a);
	}

  //  a<<2 dersek a = 2 olsun, 2'nin binary 0010'dır. 1, 2 birim sola kayar ve 100000 olur. 
  // a%b mod operatörü, kalanı verir.
  // a+=5 eşittir a=a+5
  // printf("%d", (int)pi);  pi sayısını inte dönüştürür sonrasında bu değeri çıktı olarak verir.
	
	/*
  if (2 < 3) 
	{
		kodlar
	}
	else if
	{
		diğer kodlar
	}
	else
	{
		diğer diğer kodlar
	}
	*/

	/*
  int main() {
		for (int i = 21; i <= 50; i += 2) 
		{
			printf("%d", i);
		}
	}
  */

	return 0;
}
