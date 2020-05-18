/* C++ programlamada string veri tipi */

#include <iostream>
using namespace std;
int main()
{
string str1 = "Bu bir stringtir.";
string str2 = "Bu da bir stringtir.";
string str3 = str1 + str2;  //stringleri birbiri ile topladık.
cout << "İlk stringte şu yazıyor: " << str1 << endl;
cout << "İkinci stringte bu yazıyor: " << str2 << endl;
cout << "İki stringi topladık:" << str3 << endl;
return 0;
}
