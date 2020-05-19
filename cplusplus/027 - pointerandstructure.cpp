/* C++ dilinde pointerler structurelar */
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

isciler *pointer = &isci1;  //aynı bilgiye pointer üstünden gitmek.
cout << pointer->isim << endl; // -> ile gösterilir.

return 0;
}
