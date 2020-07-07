// 5 Sayı girilecek, bunu tersten yazdıracak.

#include <stdio.h>

	int main(){

		printf("5 sayı giriniz.\n");

		int a[5]; //Asıl fonksiyonum. Girdiğim sayıları tutacak.
		int c[5]; //Gireceğim sayıların tersini tutacak dizi.
		int b=0;

		while (b<5){		//Burada tek tek değerleri a'nın içine ekliyorum 

			scanf("%d",&a[b]);

			b++;
		}

		int z=0;
		while (z<5){

			printf("İlk yazılan sayı: %d\n",a[z]);
			z++;
		}


		int d=4;  // Burada değer aktarımı yapıyorum 
		int e=0;
		while (d>-1){

			c[e]=a[d];	//5. değer a[4] olduğu için 5 yazınca sorun çıkardı.
			d--;
			e++;
		}

		int f=0;
		while (f<5){  // Tersten yazılmış sayının çıktısını alıyorum.

			printf("Tersten yazılmış sayı : %d\n",c[f]);
			f++;
		}

}


// ilk 20 fib sayısını hesapla dizi içine koy.

#include <stdio.h>


int main(){


int fib[20];

int a = 0;
int b = 1;
int c = 0;



int sayac=0;
while (sayac<20){


c = a+b;

a = b;

fib[sayac]=b;

b = c;



sayac++;
}

int f=0;
while (f<20){

    printf("%d\n",fib[f]);

    f++;
}

// değer alıp artı çizen martis yapan kod. oldukça dağınık yapıldı ve pek çok hata var ama çalışıyor :D


#include <stdio.h>


int main(){
    
int i;
int j;

printf("Kaça kaçlık olsun\n");
int a;
scanf("%d",&a);

            if(a<0){
                printf("0'dan büyük sayı giriniz.");
                }
                else{



    int g = a;
    int l = g;

 if(a%2==1){

    int b;
    b = (a/2);



    for(i=0;i<a;i++){
        
       if(i==b){

        while(g>0){
            
            printf("1");
            g--;
           }
           printf("\n");
           continue;
       }
        

        for(j=0;j<a;j++){
            
            if (j==b){printf("1");
            
            continue;
            }

             printf("0");
         }




             printf("\n");
    }

}

else {

    int b;
    b = (a/2);



for(i=0;i<a;i++){
        
       if(i==b-1){

           while(g>0){
            
            printf("1");
            g--;
           }
           printf("\n");
           continue;
        
       }

        else if(i==b){

           while(l>0){
            
            printf("1");
            l--;
           }
           printf("\n");
           continue;
        
       }
        else{}
        
        
        for(j=0;j<a-2;j++){
            
            if (j==b-1){printf("110");
            
            continue;
            }

             printf("0");
         }




             printf("\n");
    }
}

                }
}


// Pointers konu anlatımı

#include <stdio.h>
#include <stdlib.h> //malloc için gerek.
int main(){

int a = 10;

int *p; // p pointerı tanımla

p = &a; //p pointerı a'nın adresi

printf("%d\n",*p); // p'nin gösterdiği yeri basar.

printf("%d\n",p);	// p'nin değeri, yani p'nin gösterdiği yerin adresini basar.

printf("%d\n",a); // a'nın değerini basar.

printf("%d\n",&a); // a'nın adresini basar.

printf("%d\n",&p); // p'nin adresini basar.

// her pointer bir dizidir ve her dizi bir pointerdır.

int d[80];
int *p1;

p1 = d;

// d dizisinin 5. elemanına ulaşmak için;

// d[4]  veya *(p1+4) kullanılabilir.

p1 = &d[8]              //	bu şekilde yaparsak pointer 8. değerden başlar alttali printf 3 değer
printf("%d",*(p1-3));	// önceki 5. değeri gösterir.


int a=10;
int d[a]; // şeklinde belirtmek hatadır.

// malloc komutu.

int *p = (int*) malloc (sizeof(int)*10); // 10 integer alacak bir dizi tanımladık ve p pointerı bunun ilk değerini gösterir.

// burada 10 yerine a yazıp klavyeden ne kadar büyüklükte bir dizi almak istediğinizi yazabilirsiniz.

p[3] // olarak da alabilirsiniz.

int *q =(int*)malloc(sizeof(int)*a);
p[3] = 70;
printf("%d",q[3]);

// fonksiyonlar üstünde kullanımı
int f(int *);
f(&a);

int f(int*a)
{
*a=80;
}

// call by value
// call by referance


}


// çalışmadı ama bakılır 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{

int a;
int b;
printf("bir sayı giriniz.\n");
scanf("%d",&a);

b = sqrt(a);

printf("sonuç: %d\n",b);




}

// strlen kullanımı 

#include <stdio.h>
#include <string.h>
int main() 
{

printf("Karakter uzunluğu: %ld",strlen("merhabalar"));


return 0;

}
