/* C++ dilinde basit bir for döngüsü. */
#include <iostream>
using namespace std;
int main()
{
for (int i=0 ; i<10 ; i++)
{
    cout << "i'nin değeri: " << i << endl;
}
// i değerini buraya koyarsak c++ hata verir çünkü i sadece for içinde çalışıyor.
cout << "Bir sayı giriniz." << endl;
int a;
int fak = 1;
cin >> a;
for(int i = 1; i<=a ; i++)
{
    fak = fak * i;
}
cout << "Faktöriyeli: " << fak << endl;
return 0;
}
