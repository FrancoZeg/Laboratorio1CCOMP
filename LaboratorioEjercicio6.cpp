#include <iostream>

using namespace std;

int main() {
  int entero1 = 0;
  int entero2 = 0;
  cout << "Introduzca 2 números para verificar si tanto los números como la suma de ambos son impares " << endl;
  cin >> entero1;
  cin >> entero2;
  if (entero1%2 == int()) {
    cout << "El primer número introducido es par\n";
  }
  else {
    cout << "El primer número introducido es impar\n";
  }
  
  if (entero2%2 == int()) {
    cout << "El segundo número introducido es par\n";
  }
  else {
    cout << "El segundo número introducido es impar\n";
  }
  
  if ((entero1+entero2)%2 == int()) {
    cout << "La suma de los números introducidos es par";
  }
  else {
    cout << "La suma de los números introducidos es impar";
  }
    
  return 0;
}