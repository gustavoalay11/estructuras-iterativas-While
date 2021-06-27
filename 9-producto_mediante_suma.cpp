#include <iostream>
using namespace std;

int main()
{

    /*
9.- Diseñar el programa que permita leer dos números y realizar el producto mediante sumas.
*/
    int a, b;

    cout << "ingrese un numero" << endl;
    cin >> a;

    cout << "ingrese un numero" << endl;
    cin >> b;

    int i = 0;
    int add = 0;
    while (i < b)
    {
        i++;
        add += a;
    }

    cout << "el producto es: " << add << endl;
    return 0;
}