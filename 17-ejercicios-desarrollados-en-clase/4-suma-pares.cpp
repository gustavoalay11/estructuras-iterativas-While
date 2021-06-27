#include <iostream>
using namespace std;

int main()
{
    /*
4.- Determinar la suma de los términos pares y la suma de los términos impares, de la siguiente serie: 
    S = 3, 5, 8, 12, 17, 23 . . .
*/
    int num;
    cout << "ingrese un numero" << endl;
    cin >> num;

    int f = 3;
    int i = 1;
    int r = 2;
    int simpares = 0;
    int spares = 0;

    while (i <= num)
    {

        if (f % 2 == 0)
        {
            spares += f;
        }
        else
        {
            simpares += f;
        }
        f += r;
        r += 1;
        i += 1;
    }

    cout << "suma impares: " << simpares << endl;
    cout << "suma pares: " << spares << endl;

    return 0;
}