/* C++ dilinde fonksiyon tanımlama, fonksiyon çağırma */
#include <iostream>
using namespace std;


void selamla();
void facto(int sayi);




int main()
{
int sayi;
selamla(); // fonksiyonu çağırdım.
cout << "Sayıyı giriniz: " << endl;
cin >> sayi;
facto(sayi);
return 0;
}




void selamla()
{
    cout << "Naber knk" << endl;
    cout << "Zorlanıyor musun?" << endl;
}





void facto(int sayi)
{
int fak = 1;

for(int i = 2 ; i <= sayi ; i++)
{
    fak *= i;
}
cout << "Faktöriyel: " << fak << endl;
}
