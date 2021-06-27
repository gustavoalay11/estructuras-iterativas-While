#include <iostream>
using namespace std;

int main()
{
    /*
    13.-Diseñar el programa que permita tal que dado un número mostrar su valor en binario.
    */
    int n, x, binario;
    cout << "escribe un numero :";
    cin >> n;
    x = 1;
    binario = 0;
    while (n >= 1)
    {
        if (n % 2 == 1)
        {
            binario = binario + x;
        }
        n = n / 2;
        x = x * 10;
    }
    cout << "el binario es: " << binario << endl;
    return 0;
}