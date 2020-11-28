/* C++ dilinde switch case yapısı. */
#include <iostream>
using namespace std;
int main()
{

    int islem;
    cout << "İşlemi giriniz:" << endl;
    cin >> islem;

    switch (islem)
    {
    case 1:
        cout << "1. işlemi seçtiniz." << endl;
        break;
    case 2:
        cout << "2. işlemi seçtiniz." << endl;
        break;
    case 3:
        cout << "3. işlemi seçtiniz." << endl;
        break;
    case 4:
        cout << "4. işlemi seçtiniz." << endl;
        break;
    default:
        cout << "Geçersiz işlem" << endl;
        break;
    }
    return 0;
}
