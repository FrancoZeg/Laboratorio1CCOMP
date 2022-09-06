#include <iostream>

using namespace std;

int main() {
  char caracter = 'a';
  cout << "Coloque cualquier carácter en su teclado para ver su valor en código ASCII" << endl;
  cin >> caracter;
  cout << static_cast<int>(caracter)<< endl;
}