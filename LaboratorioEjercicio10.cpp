#include <iostream>

using namespace std;

int main() {
  int numero = 0;
  cout << "Introduzca un número de 4 cifras para separarlo e invertirlo" << endl;
  cin >> numero;
  cout << int (numero/1) - int (numero/10)*10 << "  " << int (numero/10) - int (numero/100)*10 << "  " << int (numero/100) - int (numero/1000)*10 << "  " << int (numero/1000) <<endl;
}