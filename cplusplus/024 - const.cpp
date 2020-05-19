/* C++ dilinde const anahtar kelimesi kullanımı */
#include <iostream>
using namespace std;
int main()
{

const int i = 32;
cout << i << endl;
i = 40; // const yazdığımız için artık değeri değiştirilemez.
cout << i << endl;
return 0;
}
