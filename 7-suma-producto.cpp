#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ingrese un numero" << endl;
    cin >> n;

    int i = 0;
    int suma = 0;
    int producto = 1;

    while (i < 30)
    {
        i++;
        suma += i;
        producto *= i;
    }

    cout << "la suma es: " << suma << endl;
    cout << "el producto es: " << producto << endl;

    return 0;
}