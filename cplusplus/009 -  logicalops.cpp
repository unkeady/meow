/* Mantıksal operatörler ile basit bir kullanıcı adı şifre girişi. */ 

#include <iostream>
using namespace std;
int main()
{

string isim = "sad";
string sifre = "yıkık";

string username;
string password;

cout << "Kullanıcı adınızı giriniz: " << endl;
cin >> username;
cout << "Parolanızı giriniz: " << endl;
cin >> password;

if(isim == username && sifre == password)
{
    cout << "Hoşgeldiniz." << endl;
}
else if(isim != username && sifre == password)
{
    cout << "Kullanıcı adı yanlış." << endl;
}
else if(isim == username && sifre != password)
{
    cout << "Şifre yanlış." << endl;
}
else
{
    cout << "Kullanıcı adını ve şifreyi yanlış girdiniz." << endl;
}
return 0;
}
