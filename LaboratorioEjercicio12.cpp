#include <iostream>

using namespace std;

int main() {
  float kilom = 0;
  float costo = 0;
  float estac = 0;
  float peaje = 0;
  cout << "Veamos cuánto podrías ahorrar diariamente compartiendo tu carro" << endl;
  cout << "Primero dime, ¿cuántos kilometros manejas al día?" << endl;
  cin >> kilom;
  cout << "Ahora dime, ¿cuánto pagas por el galón de gasolina?" <<endl;
  cin >> costo;
  cout << "Y, ¿cuánto gastas en estacionamiento?" << endl;
  cin >> estac;
  cout << "Por último, ¿cúanto gastas en peajes?" << endl;
  cin >> peaje;
  cout << "Compartiendo tu carro podrías ahorrar hasta s/." << (((costo*kilom)*45)/100) + estac + peaje << " de s/." << (costo*kilom) + estac + peaje << " a diario." << endl;
}