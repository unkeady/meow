/* C++ dilinde yapılar yani structurelar */
#include <iostream>
using namespace std;

struct isciler
{
    int id;
    string isim;
    string yer;
};


int main()
{
isciler isci1;

isci1.id = 12;
isci1.isim = "yıkık";
isci1.yer = "mars";

cout << isci1.isim << endl;


return 0;
}
