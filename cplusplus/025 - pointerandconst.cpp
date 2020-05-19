/* C++ dilinde pointerlar ve constlar */
#include <iostream>
using namespace std;

void printarray(const int *pointer1, const int *pointer2)
// Const ile pointerın gösterdiği yer değişebilir ancak gösterdiği değer değişemez.
{
for(;pointer1 != pointer2; pointer1++)
    {
        cout << "Eleman: " << *pointer1 << endl;
    }
}

int main()
{
int array[10] = {10,20,30,40,50,60,70,80,90,100};
printarray(array+2,array+7);
return 0;
}
