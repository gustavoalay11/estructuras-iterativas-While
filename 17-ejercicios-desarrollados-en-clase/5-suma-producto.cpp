#include <iostream>
using namespace std;

int main()
{
    /*
5.- Diseñar el algoritmo que permita leer una lista de 10 valores enteros y determine e informe:
a) La suma de los valores positivos.
b) El producto de los valores negativos.
*/
    int n = 0;
    int i = 1;
    int add = 0;
    int producto = 1;
    while (i < 10)
    {
        cout << "ingrese 10 enteros" << endl;
        cin >> n;

        if (n > 0)
        {
            add += n;
        }
        if (n < 0)
        {
            producto *= n;
        }
        i++;
    }

    cout << "la suma de positivos es: " << add << endl;
    cout << "el producto de negativos es: " << producto << endl;

    return 0;
}