#include <iostream>
using namespace std;

int main()
{
    /*
2.- Diseñar el Algoritmo que me permita calcular la suma de los N primeros números naturales
*/
    int num;
    cout << "ingrese un numero" << endl;
    cin >> num;

    int i = 0;
    int s = 0;

    while (i < num)
    {
        i += 1;
        s += i;
    }
    cout << " " << s << endl;

    return 0;
}