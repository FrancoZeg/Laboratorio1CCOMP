#include <iostream>

using namespace std;

int main() {
  float peso = 0;
  float altura = 0;
  cout << "Coloque su peso en kilogramos y su altura en metros para ver su Índice de Masa Corporal" << endl;
  cout << "Coloque primero su peso aquí" << endl;
  cin >> peso;
  cout << "Ahora coloque su altura aquí" << endl;
  cin >> altura;
  float imc = peso/(altura*altura);
  cout << "Este es su Índice de Masa Corporal: "<< imc << endl;
  if (imc < 18.5) {
    cout << "Usted cuenta con Bajo peso";
  }
  else if (imc >= 18.5 && imc <= 24.9) {
    cout << "Usted cuenta con una contextura normal";
  }
  else if (imc > 24.9 && imc <= 29.9) {
    cout << "Usted cuenta con Sobrepeso";
  }
  else {
    cout << "Usted cuenta con Obesidad";
  }
}