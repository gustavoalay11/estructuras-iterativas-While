#include <iostream>
using namespace std;

int main()
{
    /*
    3. - Diseñar el Algoritmo que me permita calcular la suma de los N primeros números naturales impares
    */

    int num;
    cout << "ingrese un numero" << endl;
    cin >> num;

    int i = 0;
    int s = 1;
    int impares = 0;
    while (i < num)
    {
        impares = impares + s;
        i += 1;
        s += 2;
    }

    cout << "la suma de los impares es: " << impares << endl;

    return 0;
}