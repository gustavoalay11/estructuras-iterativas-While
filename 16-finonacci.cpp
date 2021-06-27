#include <iostream>
using namespace std;

int main()
{

    /*
    16. Diseñar el programa que permita generar los N primeros términos de la serie de Fibonacci. El 
    valor N (entero y positivo) deberá ser leído por el teclado. En esta serie los dos primeros 
    números son 1, y el resto se obtiene sumando los dos anteriores: 1,1,2,3,5,8,13,21…
*/
    int n;
    cout << "ingrese la cantidad de numeros a generar" << endl;
    cin >> n;

    int i = 1;
    int add = 1;
    int add2 = 1;
    while (i < n)
    {
        cout << "la serie es: " << add << endl;
        cout << "la serie es: " << add2 << endl;
        add += add2;
        add2 += add;
        i++;
    }

    return 0;
}