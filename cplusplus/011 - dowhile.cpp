/* C++ dilinde do while döngüsü yapmak */
#include <iostream>
using namespace std;
int main()
{
string parola = "321321";
string input;
do
{
    cout << "Parolayı giriniz." << endl;
    cin >> input;
} while (input != parola);
cout << "Doğru girdiniz." << endl;
return 0;
}
