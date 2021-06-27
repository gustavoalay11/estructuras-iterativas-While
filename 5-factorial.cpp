#include <iostream>
using namespace std;

int main() {
    
/*
5.- Diseñe el programa que determine el factorial de un nÃºmero ingresado por teclado.
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
