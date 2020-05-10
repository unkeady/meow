#include <stdio.h>


int main(){
	
	// while ile 1den 10a kadar olan sayıları yazdır

	int i = 0;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}

	// do ile 1den 10a kadar olan sayıları yazdır
	int a = 0;
	do
	{
		printf("%d\n", a);
		a++;
	} 
	while (a <= 10);

	// while ile 2 sayı arasındaki tek sayıları göster
	int b = 20;
	while (b <= 50) {

		if (b % 2 == 1) {
			printf("%d\n", b);
		}

		b++;
	}
	
	// belli bir aralıkta 3e ve 7ye bölünen sayıları bulmaya yarar
	int c = 100;

	while (c >= 20) {

		if (c % 3 == 0 && c % 7 == 0) {
			printf("%d\n", c);
		}
			c--;
	}

	// 3 sayı al, en büyüğünü göster

	int d;		//girilecek sayı
	int e = 0;	//en büyük sayı
	int f = 0;	//kaç sayı alacağımızı ayarlamak için
	
	while (f < 3) {
		scanf("%d", &d);
		if (d > e) {
			e = d;
		}
		f++;
		}
	printf("%d en buyuk sayidir", e);

	// üstteki kodun aynısı ama kullanıcı -1 girene kadar okumaya devam edecek
	int g = 0;	//girilecek sayı
	int h = 0;	//en büyük sayı
	

	while (g != -1) {  
		scanf("%d", &g);
		if (g > h) {
			h = g;
		}

	}
		printf("%d en buyuk sayidir", h); //-1 değeri aldığında kod duruyor ve en büyük sayıyı printliyor.

	// kullanıcı -1 girene kadar girilen sayıların ortalamasını bulan kod


	int sayi = 0;	//kullanıcı sayıyı girecek
	int toplam = 0;	//anlık toplamı verecek
	int tane = 0;	//kaç tane sayı girdiğini bulacak
	while (sayi != -1) {
		scanf("%d", &sayi);
		tane++;
		toplam = toplam + sayi;
	}
	tane--;					// Burada tane ve toplam değerlerini değiştirmemizin sebebi 
	toplam++;				// -1 yazarak çıkış yaptığımızda son sayı olarak -1i alması
	printf("ortalama %d dir", toplam/tane);

	

	// girilen sayının asal olup olmadığını bulan kod

	int a; // bu sayı gireceğim sayı olsun
	int b; // bu sayıyı sürekli a'ya böleceğim 
	int flag = 0; //en son kontrol edeceğim eğer 1 olduysa asaldır ya da değildir diye yorum yapacağım

	scanf("%d", &a);
	b = 2;
	while (b < a-1) {
	
		if (a % b == 0) {
			flag = 1;
			break;
			}
		b++;
	}

	if (flag == 0) {
		printf("Asal");
	}
	else printf("Asal degil");

							
	//	iç içe döngüler
	//	çarpım tablosu

	int i;
	int j;

	for (i = 1; i <= 5; i++) {

		for (j = 1; j <= 5; j++) {
			printf("%d ", i * j);
		}
		printf("\n");
	}
	

	//	* ile dik üçgen çizdiren kod

	for(int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//	* ile ters üçgen basmak 
	
	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	

//	* ile sağa dayalı ters üçgen basmak

	for (int i = 5; i >= 1; i--) {
		for (int k = 0; k < 5 - i; k++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");

}


	//	break döngüyü kırar 
	//	continue döngüdeki bir sonraki adımı yok saymanı sağlar


	// FONKSIYONLAR

	/*

	f(x,y)=x^2+2xy+y^2					Matematiksel formül

	int f(int x, int y) {				Kod hali
	return x * x + 2 * x * y + y * y;
	}

	*/
	
	//	verilen sayının faktöriyelini bulan kod

#include<stdio.h>

	int fact(int); //fonksiyon aşağıda olduğu için burada tanımlamalıyım 
	int comb(int, int); //kombinasyon kesaplayan fonksiyonu burada belirttim.
	int main() {
		int x;
		scanf("%d", &x);
		printf("factoriyeli: %d", fact(x));
		printf("kombinasyonu: %d", comb(x, y)); //çalışmaz çünkü y değerini scanf ile almadım
	}

	int fact(int x) {			//eğer bu kısım mainin üstünde olsaydı tanıma gerek olmazdı
		int sonuc = 1;
		for (int i = 1; i <= x; i++) {
			sonuc *= i;
		}
		return sonuc;
	}

	int comb(int x, int y) {      //kombinsayon hesaplayan fonsiyon
		return fact(x) / (fact(y) * (fact(x - y)));
	}

	//	FIBONACCI
	// 1,1,2,3,5,8,13,21...

	//verilen sıradaki fibonacci sayısını bulan kod


#include <stdio.h>
	
	int fib(int); //burada fonksiyonumu belirttim
	int main() {
		int x;
		scanf("%d", &x);
		printf("%d", fib(x));
		return 0;
}
	
	int fib(int n) {
		int a = 1;
		int b = 1;
		int c;

		for (int i = 3; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}

	int fib(int n) {	//bu şekilde de değer bulunabilir burada yaılan olay
			//fonksiyona kendisini çağırtmaktır. 1 returnu verene kadar kendisini çağırmaya devam eder.
		if (n == 1 || n == 0)
			return 1;
		return fib(n - 1) + fib(n - 2);
	}

	return 0;
}
