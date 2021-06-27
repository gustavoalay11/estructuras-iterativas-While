

#include <iostream>
using namespace std;

int main()
{

    /*
6.- Diseñar el algoritmo y programa que calcule la suma de los N primeros componentes de la serie de Fibonacci
*/
    int n;
    cout << "ingrese N mayor que 3:" << endl;
    cin >> n;

    int anterior = 0;
    int actual = 1;
    cout << anterior << endl;
    cout << actual << endl;
    int i = 3;
    int suma = anterior + actual;

    int siguiente = 0;
    while (i <= n)
    {
        siguiente = anterior + actual;
        cout << siguiente << endl;
        anterior = actual;
        actual = siguiente;
        suma += siguiente;
        i++;
    }

    return 0;
}