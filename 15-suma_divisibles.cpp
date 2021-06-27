#include <iostream>
using namespace std;

int main()
{
    /*
  15.- Diseñar el programa que permita calcular la suma de los enteros generados que sean divisibles por 5.
*/
    int n;
    cout << "ingrese la cantidad de numeros a generar" << endl;
    cin >> n;

    int i = 1;
    int add = 0;
    while (i <= n)
    {
        if (i % 5 == 0)
        {
            add += i;
        }
        i++;
    }

    cout << "la suma de los numeros divibles por cinco es: " << add << endl;

    return 0;
}