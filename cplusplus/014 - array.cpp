/* C++ dilinde arrayler ve özellikleri */
#include <iostream>
using namespace std;
int main()
{
int array[3];
array[0] = 10;
array[1] = 20;
array[2] = 30;

cout << "0. eleman: " << array[0] << endl;
cout << "1. eleman: " << array[1] << endl;
cout << "2. eleman: " << array[2] << endl;

int array2[] = {10,20,30,40};
double array3[] = {1.2 , 3.5 , 4.6 , 7.6};

for(int a=0;a<4;a++)
{
    cout << "-> " << array3[a] << " <-" << endl;
}

string array4[4]; // kullanıcıdan 4 string al ve bunları yazdır.

for(int w = 0;w<4;w++)
{
    cin >> array4[w];
}

for(int q=0;q<4;q++)
{
    cout << q <<". değer: " << array4[q] << endl;
}
return 0;
}
