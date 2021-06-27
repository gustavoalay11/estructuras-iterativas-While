#include <iostream>
using namespace std;

int main() {

/*
4.- Diseñe el programa que permita determinar si un número ingresado es primo.
*/
int n;
cout << "ingrese un numero" << endl;
cin >> n;

int i = 0;
int count = 0;
while(i < n){
  i++;
  
  if(n % i == 0){
    count += 1;
  }
  
}

if(count == 2){
  cout << "es primo" << endl;
} else {
  cout << "no es primo" << endl;
}

 return 0;
}