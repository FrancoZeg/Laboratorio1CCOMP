#include <iostream>

using namespace std;

int main() {
  int entero1 = 0;
  int entero2 = 0;
  int entero3 = 0;
  cout << "Introduzca 3 números para verificar si los 2 primeros son multiplos del tercer número" << endl;
  cin >> entero1;
  cin >> entero2;
  cin >> entero3;
  if (entero3%entero1 == int()) {
    cout << entero1 << " es múltiplo de " << entero3 << "\n" << endl;
  }
  else {
    cout << entero1 << " no es múltiplo de " << entero3 << "\n" << endl;
  }
  
  if (entero3%entero2 == int()) {
    cout << entero2 << " es múltiplo de " << entero3 << "\n" << endl;
  }
  else {
    cout << entero2 << " no es múltiplo de " << entero3 << "\n" << endl;
  }
  
  return 0;
}