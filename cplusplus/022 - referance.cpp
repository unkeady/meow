/* C++ dilinde referansların kullanımı */

#include <iostream>
using namespace std;

void degerdegistir(int &ref)
{
    ref = 20;
}

int main()
{
int a = 10;
cout << "A'nın ilk değeri: " << a << endl;
degerdegistir(a);
cout << "A'nın sonraki değeri: " << a << endl;
return 0;
}
