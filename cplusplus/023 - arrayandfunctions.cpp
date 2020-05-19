/*  C++ dilinde fonksiyonlara array göndermek */

#include <iostream>
using namespace std;

void printarray(int *pointer, int size)
{
    for(int i=0 ; i < size ; i++)
    {
        cout << pointer[i] << endl;
    }

}

int main()
{
int a[] = {1,2,3,4,5};
printarray(a,5);
return 0;
}
