#include <iostream>

using namespace std;

int main() {
  int numero = 0;
  cout << "Longitud de la\t" << "Superficie del\t" << "Volumen\t" << endl;
  cout << " cara del cubo\t" << " cubo\t" << "\tdel cubo\t" << endl;
  cout << numero << "\t" << 6*(numero*numero) << "\t" << (numero*numero*numero) << "\t" << endl;
  cout << numero + 1 << "\t" << 6*((numero+1)*(numero+1)) << "\t" << ((numero+1)*(numero+1)*(numero+1)) << "\t" << endl;
  cout << numero + 2 << "\t" << 6*((numero+2)*(numero+2)) << "\t" << ((numero+2)*(numero+2)*(numero+2)) << "\t" << endl;
  cout << numero + 3 << "\t" << 6*((numero+3)*(numero+3)) << "\t" << ((numero+3)*(numero+3)*(numero+3)) << "\t" << endl;
}