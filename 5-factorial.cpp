#include <iostream>
using namespace std;

int main() {
    
/*
5.- Dise�e el programa que determine el factorial de un número ingresado por teclado.
*/
int n;
cout << "ingrese un numero" << endl;
cin >> n;

int i = 0;
int factorial = 1;
while(i < n){
  i++;
  factorial *= i;
}

cout << "el resultado del factorial es: " << factorial << endl;

 return 0;
}
