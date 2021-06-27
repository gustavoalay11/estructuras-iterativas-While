#include <iostream>
using namespace std;

int main()
{
    /*
12.- Diseñar el programa que permita leer una secuencia de números y determina cual es el mayor de ellos.
*/
    int n;
    cout << "ingrese la cantidad de la secuencia" << endl;
    cin >> n;

    int i = 0;
    int a, b;
    while (i < n)
    {
        i++;
        cout << "ingrese dos numeros a evaluar" << endl;
        cin >> a;
        cin >> b;
        int aux = a;
        if (a < b)
        {
            a = b;
            b = aux;
        }

        cout << "el mayor es: " << a << endl;
    }
    return 0;
}