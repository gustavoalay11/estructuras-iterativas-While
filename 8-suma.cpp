#include <iostream>
using namespace std;

int main()
{
    /*
8.-Diseñar el programa que permita leer una secuencia de números, hasta que se introduce un número negativo y mostrar la suma de dichos números.
*/
    int n = 1;

    int suma = 0;
    while (n > 0)
    {
        cout << "ingrese un numero" << endl;
        cin >> n;

        if (n > 0)
        {
            suma += n;
        }

        if (n < 0)
        {
            n = -1;
        }
    }
    cout << "la suma de los numeros introducidos es: " << suma << endl;
    return 0;
}