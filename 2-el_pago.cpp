#include <iostream>
using namespace std;

int main() {

/*
2- Diseñe el programa que permita tal que dado como datos los sueldos de 10 trabajadores de una empresa, obtenga el total de la nÃ³mina de PAGO.
*/
int i = 0;
int salary;
int add = 0;
while(i < 10){
  i++;  
  cout << "ingrese el saldo "<< i << endl;
  cin >> salary;
  add += salary;
}
  cout << "el total de pago es: " << add << " soles" << endl;

  return 0;
}
