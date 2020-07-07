#include <stdio.h>
#include <stdlib.h>

int main()
{

int *b = (int*)malloc(sizeof(int)*5); //5 birimlik yer ayır.

b[3] = 8;
b[0] = 2;
*(b+1) = 10;
*(b+2) = 11;
b[4] = 14;
int i;

for (i = 0; i < 5; i++)
{
    printf("%d ",b[i]);
}
}



#include <stdio.h>
#include <stdlib.h>

//  struct konu anlatımı

typedef enum
{
    pazartesi,
    sali,
    carsamba,
    persembe,
    cuma,
    cumartesi,
    pazar
} gunler; // günleri tanımladık.


int emeklimi
(insan *birey)
{
    if(birey -> yas>55)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}






int main()
{



typedef struct 
{
    int yas;
    char *isim;
    gunler tatilgunu; // günlerden tatil günü tanımladık.

} insan;

insan ali; //insan tipi tanımladık

insan *veli;

veli =(insan*)malloc(sizeof(insan));

veli -> yas = 40;


ali.yas = 30;

ali.tatilgunu = persembe; // aslında diziye koyduğu için 3 demek.

printf("velinin yaşı : %d\n",veli->yas);


printf("alinin yaşı : %d\n", ali.yas);

printf("ali emekli mi: %d\n",emeklimi(&ali));

printf("veli emekli mi: %d\n",emeklimi(veli));

}

#include <stdio.h>
#include <stdlib.h>


/* #include <string.h>

strcpy(a,b);
strlen(a); boyutu döndürür

*/
int main()
{

    char isim[20];
    char *soyisim;
    soyisim = (char*) malloc(sizeof(char)*20);
    scanf("%s",isim);
    scanf("%s",soyisim);
    printf("Tanıştığımıza memnun oldum %s %s\n",isim,soyisim);
    printf("üçüncü karakterker %c %c\n", isim[3],soyisim[3]);
}

/* c dilinde math.h kütüphanesi. */

#include <stdio.h>
#include <math.h>
int main()
{


ceil(sayı) -> Kendinden büyük sayıya yuvarlanır.

floor(sayı) -> Kendinden küçük sayıya yuvarlar.

sqrt(sayı) -> Sayıyı kök içine alır. Tam çıkmazsa hata vermez "," den sonra devam eder.

abs(sayı,sayı) -> İlk sayının üstü olarak ikinci sayıyı yazar.

pow() -> Mutlak değerde keri döndürür.

/* örnekler */
printf("\n%f",ceil(3.6));    
printf("\n%f",ceil(3.3));    
printf("\n%f",floor(3.6));    
printf("\n%f",floor(3.2));    
printf("\n%f",sqrt(16));    
printf("\n%f",sqrt(7));    
printf("\n%f",pow(2,4));    
printf("\n%f",pow(3,3));    
printf("\n%d",abs(-12));     
 return 0;
}

/* C dilinde string.h hütüphanesi. */

#include <stdio.h>
#include <string.h>


int main()
{

char ch[7]={'s', 't', 'r', 'i', 'n', 'g','\0'};    
char ch2[7]="string";

printf("%s\n", ch);    
printf("%s\n", ch2);  


char s[20];
printf("Bir string giriniz.\n");
scanf("%[^\n]s",s);   // boşlukları da algılamak için.
printf("You entered %s\n",s);



char k[20] = "pointerss";
char *p = k; //p pointerı s'nin başlangıcını gösteriyor.
printf("%s\n",p);


char *n = "selam pointer";
printf("n pointerı :%s\n",n);
char *m = "diğer bi pointer";
printf("diğer pointer: %s\n",m);
m = n;   // 2 pointer içine değer yazdık ve bunların yerini değiştirip yazıdrdık.
printf("m değişen değeri: %s\n",m);



char *z = "ilk yazdığım yazı\n";
printf("1 -> %s",z);
z = "ikinci yazdığım";  // pointer içindeki bir değeri değiştirdim.
printf("2 -> %s\n",z);

// stringler için gets ve puts stdio.h içinde bulunur.

char x[30];
printf("Bir şeyler yazınız:\n");
gets(x);  // get ile girdi aldık. (riskli.)
printf("Şunu yazdınız: %s\n",x);


char v[20];
printf("Bir şeyler yazınız:\n");
fgets(v,20,stdin);  // fgets ile kaç karaktere kadar alacağını belirtiyoruz. (güvenli.)
printf("Şunu yazdınız: %s\n",v);

// ayrıca yazdırmak için puts kullanılabilir.
puts(v);

char *f ="hadi bakalım";    // [20] gibi değil de pointerın içine yazdım.
printf("%d\n",strlen(f));     // kaç karakter olduğunu gösterir.


char f[20] = "ağlamıyorum"; //pointer olarak alınca hata verdi.
char t[20];
strcpy(t,f); // stringleri kopyalıyor.
printf("t'nin içinde yazan şey: %s\n",t);


// strcat(1,2); iki stringi birbirine ekler, 1. ye yazar.
// strcmp iki stringin eşit olup olmadığına bakar eşitse 0 döndürür

if(strcmp(str1,str2)==0)
{
    printf("eşitler.");
}
else
{
    printf("eşit değiller.");
}


// strrev stringi ters yazdırır.
int g[4] = {'s','a','d'};
printf("Tersten yazılmış hali: %s",strrev(g));

//strlwr hepsini küçük harf bastırır.
printf("%s",strlwr(str)); 
//strupr tam tersi hepsini büyük yazdırır.


char str[100]="buraya bir şeyler yazdım";    
char *sub;    
sub=strstr(str,"fc");    // içinde fc olup olmadığına bakar.
printf("\nSubstring is: %s",sub); 

return 0;
}
