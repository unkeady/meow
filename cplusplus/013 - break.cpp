/* C++'da break ve continue kullanımı */
#include <iostream>
using namespace std;
int main()
{
int i = 0;
int k = 0;
while (i<10)
{
   if(i==5)
    {
        break;
    }
    cout << i << endl;

    i++;
}
while (k<10)
{
    
    if(k==2)
    {
        k++;
        continue;
    }
    k++;
    cout << k << endl;
}
return 0;
}
