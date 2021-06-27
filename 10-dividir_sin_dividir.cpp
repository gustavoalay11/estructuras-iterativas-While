#include <iostream>
using namespace std;

int main()
{

    /*
10.- Diseñar el programa que permita leer dos números y realizar la división mediante restas mostrando el cociente y el resto.
*/

    int dividendo, divisor;

    cout << "ingrese un numero" << endl;
    cin >> dividendo;

    cout << "ingrese un numero" << endl;
    cin >> divisor;

    int i = 0;
    while (dividendo > 0)
    {
        i++;
        dividendo -= divisor;
    }

    cout << "el cociente es: " << i << endl;
    cout << "el residuo es: " << dividendo << endl;
    return 0;
}