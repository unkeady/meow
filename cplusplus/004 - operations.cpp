/* C++ dilinde basit operatörler ve kullanımları */

#include <iostream>

using namespace std;

int main()
{
int a = 10;
int b = 4;
cout << "a + b = " << a+b << endl;
cout << "a - b = " << a-b << endl;
cout << "a / b = " << float(a)/b << endl; // ondalıklı değer gelmesi için tür değişimi yaptırdım.
cout << "a * b = " << a*b << endl;

int x = 5;
cout <<"x'in şu anki değeri: " << x << endl;
x = x + 2;
cout <<"x'in şu anki değeri: " << x << endl;
x += 2;
cout <<"x'in şu anki deperi: " << x << endl;
x++;
cout <<"x'in şu anki değeri: " << x << endl;
return 0;
}
