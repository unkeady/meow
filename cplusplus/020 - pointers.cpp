/* C++ dilinde pointer kullanımı */
#include <iostream>
using namespace std;
int main()
{

int a = 5;
int *p = &a;

cout << "Adres: " << &a << endl;
cout << "Adres: " <<  p << endl;
cout << "İlk değer" << *p << endl;

*p = 6;

cout << "Yeni değer: " << *p << endl;

return 0;
}
