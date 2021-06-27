#include <iostream>
using namespace std;

int main() {
 //1-Diseñe el programa que permita ingresar un número e imprima la tabla de multiplicar.
 int n;
 cout << "ingrese un numero" << endl;
 cin >> n;

int i = 0;

 while(i < 10){
   i++;

   int res = n * i;
   

   cout << n << " * " << i << " = " << res << endl;
 }

 return 0;
}