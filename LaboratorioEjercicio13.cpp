#include <iostream>

using namespace std;

int main() {
  int edad = 0;
  cout << "Vamos a medir tu Máxima Frecuencia Cardíaca\n" << "Coloque su edad" << endl;
  cin >> edad;
  int comun = 220 - edad;
  cout << "Su Máxima Frecuencia Cardíaca es, según la ecuación más usada: "<< comun << endl;
  float tanaka = 208 - 0.7*(edad);
  cout << "Su Máxima Frecuencia Cardíaca es, según la ecuación propuesta por Tanaka: " << tanaka << endl;
  float gellish = 207 - 0.7*(edad);
  cout << "Su Máxima Frecuencia Cardíaca es, según la ecuación propuesta por Gellish: "<< gellish << endl;
  float nes_et_al = 211 - 0.64*(edad);
  cout << "Su Máxima Frecuencia Cardíaca es, según la ecuación propuesta por Nes et al: " << nes_et_al << endl;
  cout << "Debería tomar más en cuenta: " << endl;
  
  if (comun > tanaka && comun > gellish && comun > nes_et_al) {
    cout << "La ecuación más usada: " << comun << endl;
  }
  if (comun < tanaka && comun < gellish && comun < nes_et_al) {
    cout << "La ecuación más usada: " << comun << endl;
  }   
  if (tanaka > comun && tanaka > gellish && tanaka > nes_et_al) {
    cout << "La ecuación propuesta por Tanaka: " << tanaka << endl;
  }
  if (tanaka < comun && tanaka < gellish && tanaka < nes_et_al) {
    cout << "La ecuación propuesta por Tanaka: " << tanaka << endl;
  }
  if (gellish > tanaka && gellish > comun && gellish > nes_et_al) {
    cout << "La ecuación propuesta por Gellish: " << gellish << endl;
  }
  if (gellish < tanaka && gellish < comun && gellish < nes_et_al) {
    cout << "La ecuación propuesta por Gellish: " << gellish << endl;
  }
  if (nes_et_al > tanaka && nes_et_al > gellish && nes_et_al > comun) {
    cout << "La ecuación propuesta por Nes et al: " << nes_et_al << endl;
  }
  if (nes_et_al < tanaka && nes_et_al < gellish && nes_et_al < comun) {
    cout << "La ecuación propuesta por Nes et al: " << nes_et_al << endl;
  }
}