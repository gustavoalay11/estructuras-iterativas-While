#include <iostream>
using namespace std;

int main() {
    
/*
3.- Diseñar el programa que permita calcular la suma de los numeros enteros comprendidos entre dos cantidades ingresadas por teclado
*/
int a, b;
cout << "ingrese un numero" << endl;
cin >> a;

cout << "ingrese otro numero mayor que el anterior" << endl;
cin >> b;

int add = 0;

if (b < a ){
int aux = b;
	b =  a;
	a = aux; 
}

b--;
while(a < b){
  a++;
  add += a;
}

cout << "la suma de los numeros es: " << add << endl;

 return 0;
}
