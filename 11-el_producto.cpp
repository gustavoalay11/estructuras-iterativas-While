#include <iostream>
using namespace std;

int main()
{
    /*
11.- Diseñar el programa que permita leer una secuencia de números y mostrar su producto, el proceso finalizará cuando el usuario pulse a la tecla F.
*/
    int n = 1;
    int a, b;
    while (n > 0)
    {
        cout << "ingrese dos numero" << endl;
        cin >> a;
        cin >> b;
        a *= b;

        if (a <= 0 || b <= 0)
        {
            n = -1;
        }

        cout << "el producto es: " << a << endl;
    }
    return 0;
}