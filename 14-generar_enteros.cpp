#include <iostream>
using namespace std;

int main()
{
    /*
14.- Diseñar el programa que permita generar enteros de 3 en 3 comenzando por 2 hasta el valor máximo menor que 30.
*/
    int i = 2;
    int n = 30;

    while (i < n)
    {
        cout << i << endl;
        i += 3;
    }

    return 0;
}