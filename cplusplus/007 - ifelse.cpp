/* C++ dilinde if ve else kullanımı. */ 

#include <iostream>
using namespace std;
int main()
{
string password = "yıkık";
string input;

cout << "lütfen parolanızı girin:" << endl;
cin >> input;

if(password == input)
{
    cout << "Doğru girdiniz." << endl;
}
else 
{
    cout << "Yanlış girdiniz." << endl;
}
return 0;
}
