/* C++ dilinde if else if kullanımı ayrıca basit bir hesap makinası */ 

#include <iostream>
using namespace std;
int main()
{

int a;
int b;
int islem;

cout << "Araya boşluk bırakarak 2 sayı giriniz." << endl;
cin >> a >> b;
cout << "Yapmak istediğiniz işlemin numarasını giriniz." << endl;
cout << " 1 -> Toplama" << endl;
cout << " 2 -> Çıkarma" << endl;
cout << " 3 -> Çarpma" << endl;
cout << " 4 -> Bölme" << endl;
cin >> islem;

if(islem == 1)
{
    cout << "İşlemin sonucu: " << a+b << endl;
}
else if(islem == 2)
{
    cout << "İşlemin sonucu: " << a-b << endl;
}
else if(islem == 3)
{
    cout << "İşlemin sonucu: " << a*b << endl;
}
else if(islem == 4)
{
    cout << "İşlemin sonucu: " << a/b << endl;
}
else 
cout << "Verilenlerden farklı bir sayı girdiniz, kod patladı xd." << endl;
return 0;
}
