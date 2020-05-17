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
