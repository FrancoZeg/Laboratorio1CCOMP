#include <iostream>

using namespace std;

int main() {
  float pi = 3.14159;
  int radio = 0;
  cout << "¿Cuál es el radio del círculo que vamos a usar?" << endl;
  cin >> radio;
  cout << "Este es el diametro del círculo de radio " << radio << ":\n"
       << radio / 2 << endl;
  cout << "Esta es la circunferencia del círculo de radio " << radio << ":\n"
       << radio * pi * 2 << endl;
  cout << "Esta es el área del círculo de radio " << radio << ":\n"
       << pi * (radio * radio) << endl;
  return 0;
}