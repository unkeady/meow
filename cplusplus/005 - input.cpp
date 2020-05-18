/* C++ dilinde 3 sayıyı input olarak alıp toplamlarını hesaplama */ 
#include <iostream>
using namespace std;
int main()
{
int x;
int y;
int z;
int toplam;

cout << "Lütfen ilk sayıyı giriniz:" << endl;
cin >> x;
cout << "Lütden ikini sayıyı giriniz:" << endl;
cin >> y;
cout << "Lütfen üçüncü sayıyı giriniz" << endl;
cin >> z;
toplam = x + y + z;
cout << "Toplamları: " << toplam << endl;
return 0;
}
/* Ayrıca 3 sayıyı arka arkaya almak için ( boşuk bırakarak girilecek )
cin >> a >> b >> c;
kullanılabilir. */
