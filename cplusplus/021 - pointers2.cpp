#include <iostream>
using namespace std;

void degerdegistir(int *p)
{
    *p = 20;
    cout << "Fonksiyon içindeki değer: " << *p << endl;
}

int main()
{
int a = 10;
cout << "A değişkeninin değeri: " << a << endl;
degerdegistir(&a);
cout << "A'nın yeni değeri: " << a << endl;

return 0;
}
