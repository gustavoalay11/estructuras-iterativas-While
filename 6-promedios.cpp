#include <iostream>
using namespace std;

int main() {
/*
6.- Diseñar el programa que calcule el promedio de las notas ingresadas. Cuando el usuario ingrese una nota igual a cero se dejaran de ingresar las notas.
*/
int n = 1;
int i = 0;
float add = 0;
while(i < n){
  i++;
  cout << "ingrese sus notas" << endl;
  cin >> n;
  add += n;

}

float promedio = ( add / (i - 1));
cout << "el promedio es: " << promedio << endl;

 return 0;
}
