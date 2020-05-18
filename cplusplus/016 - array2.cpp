/* C++ dilinde çok boyutlu arrayler */

#include <iostream>
using namespace std;
int main()
{

int array[] = {1,2,3,4,5};
int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

cout << matris[0][1] << endl;
cout << matris[2][2] << endl;
cout << matris[1][1] << endl;

// for döngüsü ile çok boyutlu matris yazdırma.

for(int i=0; i<3 ; i++)
{
    for(int j=0;j<3;j++)
    {
        cout << matris[i][j] << " ";
    }
    cout << endl;
}
return 0;
}
