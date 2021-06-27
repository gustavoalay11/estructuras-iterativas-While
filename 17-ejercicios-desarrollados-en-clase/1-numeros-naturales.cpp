#include <iostream>
using namespace std;

int main()
{
    /*
  1.- Diseñe el algoritmo que permita determinar los N primeros números naturales 
  */

    int num;
    cout << "ingrese un numero" << endl;
    cin >> num;

    int i = 0;

    while (i < num)
    {
        i += 1;

        cout << " " << i << endl;
    }
    return 0;
}