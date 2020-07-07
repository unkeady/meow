
//	Merhaba dünya yazan kod yazınız.

#include <stdio.h>

int main() {
	printf("Hello World");
}
//	Bir tam sayı değişkeni (int) tanımlayarak içerisine ilk değer atayın ve ekrana değerini basınız.

#include <stdio.h>

int main() {
	int a;
	a = 1;
	printf("%d", a);
}

//	Ekrandan bir sayı okuyup bu sayıyı ekrana geri basınız.

#include <stdio.h>

int main() {
	int a;
	printf("Bir sayi giriniz:\n");
	scanf("%d", &a);
	printf("Girdiginiz sayi: %d", a);
}



//Ekrandan okunan iki tam sayı (int) için basit işlemler yaparak ekrana sonuçları basan kod yazınız. Bu işlemler toplama, çıkarma, çarpma, bölme ve kalan işlemleridir.

#include <stdio.h>

int main() {
	int a;
	int b;
	printf("2 sayi giriniz:\n");
	scanf("%d%d", &a, &b);
	printf("girdiginiz iki sayi %d ve %d\n", a, b);
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
}



//	Klavyeden iki sayı alarak bu sayıları mantıksal olarak karşılaştıran kod örneğini yazınız. Kullanılacak olan operatörler şunlardır: == , != , < , > , <= , >=

#include <stdio.h>

int main() {
	int a;
	int b;
	printf("2 sayi giriniz:\n");
	scanf("%d%d", &a, &b);

	if (a == b) {
		printf("iki sayi esittir\n");
	}
	else {
		printf("iki sayi esit degildir\n");
	}

	if (a != b) {
		printf("iki sayi esit degildir\n");
	}
	else {
		printf("iki sayi esittir\n");
	}

	if (a < b) {
		printf("a sayisi b'den kucuktur\n");
	}
	else {
		printf("a sayisi b'den kucuk degilidr\n");
	}
}



//	Klavyeden üç sayı alarak mantık bağlaçlarını kullanan örnek bir kod yazınız. Örneğin okunan sayılar a, b ve c olsun. Sırasıyla, a'nın b ve c arasında olup olmadığını, 
//	a'nın b'ye eşit ve aynı zamanda c'den küçük olup olmadığını a'nın b'den veya c'den büyük olup olmadığını üç sayının birbirine eşit olup olmadığını kontrol edip ekrana basan kodu yazınız.


#include <stdio.h>

int main() {
	int a, b, c;
	printf("3 sayi giriniz\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if (b > a && a > c) {
		printf("a iki sayi arasindadir\n");
	}
	else if (c > a&& a > b) {
		printf("a iki sayi arasindadir\n");
	}
	else {
		printf("a iki sayi arasinda degildir\n");
	}

	if (a == b && a < c) {
		printf("a b'ye esittir ve c'den kucuktur\n");
	}
	else printf("a b'ye esit ve ayni zamanda c'den kucuk degildir\n");

	if (a > b || a > c) {
		printf("a, b veya c'den buyuktur\n");
	}
	else printf("a, b veya c'den buyuk degildir\n");

	if (a == c && b == c) {
		printf("3 sayi da birbirine esittir\n");
	}
	else printf("3 sayi birbirine esit degildir\n");
}


//	Klavyeden 3 sayı okuyarak bu sayılardan en büyüğünü veya en küçüğünü ekrana yazan kodu yazınız.
//	Eşit sayılar girilirse kod düzgün çalışmaz.
#include <stdio.h>

int main() {
	int a, b, c;
	printf("3 tane sayi giriniz\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && b > c) {
		printf("a en buyuktur\n");
		printf("c en kucuktur\n");
	}
	else if (a > b && c > b) {
		printf("a en buyuktur\n");
		printf("b en kucuktur\n");
	}

	if (b > a && a > c) {
		printf("b en buyuktur\n");
		printf("c en kucuktur\n");
	}
	else if (b > a && c > a) {
		printf("b en buyuktur\n");
		printf("a en kucuktur\n");
	}

	if (c > b && b > a) {
		printf("c en buyuktur\n");
		printf("a en kucuktur\n");
	}
	else if (c > b && a > b) {
		printf("c en buyuktur\n");
		printf("b en kucuktur\n");
	}
	else printf("\n");
	
	//	Klavyeden 0 ile 100 arasında bir sayı okuyarak harf karşılığını bulunuz (A: 90 - 100, B: 80 -90, C:70-80 arası ve F: 70'in altı olarak kabul edebilirsiniz).

#include <stdio.h>

int main(){

	int a;
	printf("0 ile 100 arasinda bir sayi giriniz\n");
	scanf("%d", &a);
	if (a > 100 || a < 0) {
		printf("lutfen 0 ile 100 arasinda bir sayi giriniz\n");
	}
	else if (a < 100 && a>=90) {
		printf("A\n");
	}

	else if (a < 90 && a>=80) {
		printf("B\n");
	}

	else if (a < 80 && a>=70) {
		printf("C\n");
	}

	else if (a < 70 && a>=0) {
		printf("F\n");
	}
}

	

//	1'den 10'a kadar olan ardışık sayıları ekrana bastıran kodu yazınız.

#include <stdio.h>

int main() {

	int a = 0;
	
	while (a < 10) {
		a++;
		printf("%d\n", a);	
	}
}



//	100'den 0'a kadar 13'e tam bölünebilen sayıları ekrana yazdırınız (büyükten küçüğe).

#include <stdio.h>

int main() {

	int a = 100;

	while (a > 0) {

		if (a % 13 == 0) {
			printf("%d\n", a);
		}
	
	a--;
	}
}



// Fibonacci serisinin ilk iki elemanı 1'dir ve diğer elemanları, kendisinden önce gelen son iki elemanın toplamıdır. Klavyeden bir sayı okuyarak, girilen sayı kadar fibonacci serisinin elemanını ekrana bastıran kodu yazınız.

#include <stdio.h>

int main() {

	int a;
	printf("kac eleman gormek istiyorsunuz?");
	scanf("%d", &a);

	int s1 = 1;
	int s2 = 0;
	int d;

	while (a > 0) {
		d = s1 + s2;
		s1 = s2;
		s2 = d;

		printf("%d\n", d);
		a--;
	}

}
