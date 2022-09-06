#include <iostream>

using namespace std;

int main() {
  cout << "Coloque 5 números a continuación para ver el mayor y el menor de todos\n";
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;
  int num5 = 0;
  cin >> num1;
  cin >> num2;
  cin >> num3;
  cin >> num4;
  cin >> num5;
  if (num1 >= num2) {
    if (num1 >= num3) {
      if (num1 >= num4) {
        if(num1 >= num5) {
          cout << "El número " << num1 << " es el mayor de la lista\n";
        }
      }
    }
  }
  
  if (num2 >= num1) {
    if (num2 >= num3) {
      if (num2 >= num4) {
        if(num2 >= num5) {
          cout << "El número " << num2 << " es el mayor de la lista\n";
        }
      }
    }
  }
  
  if (num3 >= num2) {
    if (num3 >= num1) {
      if (num3 >= num4) {
        if(num3 >= num5) {
          cout << "El número " << num3 << " es el mayor de la lista\n";
        }
      }
    }
  }
  
  if (num4 >= num2) {
    if (num4 >= num3) {
      if (num4 >= num1) {
        if(num4 >= num5) {
          cout << "El número " << num4 << " es el mayor de la lista\n";
        }
      }
    }
  }
  
  if (num5 >= num2) {
    if (num5 >= num3) {
      if (num5 >= num4) {
        if(num5 >= num1) {
          cout << "El número " << num5 << " es el mayor de la lista\n";
        }
      }
    }
  }
  
  if (num1 <= num2) {
    if (num1 <= num3) {
      if (num1 <= num4) {
        if(num1 <= num5) {
          cout << "El número " << num1 << " es el menor de la lista";
        }
      }
    }
  }
  if (num2 <= num1) {
    if (num2 <= num3) {
      if (num2 <= num4) {
        if(num2 <= num5) {
          cout << "El número " << num2 << " es el menor de la lista";
        }
      }
    }
  }
  
  if (num3 <= num2) {
    if (num3 <= num1) {
      if (num3 <= num4) {
        if(num3 <= num5) {
          cout << "El número " << num3 << " es el menor de la lista";
        }
      }
    }
  }
  
  if (num4 <= num2) {
    if (num4 <= num3) {
      if (num4 <= num1) {
        if(num4 <= num5) {
          cout << "El número " << num4 << " es el menor de la lista";
        }
      }
    }
  }
  
  if (num5 <= num2) {
    if (num5 <= num3) {
      if (num5 <= num4) {
        if(num5 <= num1) {
          cout << "El número " << num5 << " es el menor de la lista";
        }
      }
    }
  }
  return 0;
}