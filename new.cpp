// Version 1.0.1
// Code developed by sjmz, learning new things

#include <iostream>

using namespace std;

int main() {
  cout << "Bienvenido\n"; // el \n es para separar o tambien podemos usar <<endl
  cout << "al sistema\n";
  cout << "de\n";
  cout << "calculadora\n";
  cout << "dev by sjmz\n";

  double numero1; // Primero lo definimos si es entero o string(palabras) o char(un caracter) etc.
  double numero2;
  
  cout << "========================\n";
  cout << "Diga el primer numero : ";
  cin >> numero1;

  cout << "========================\n";
  cout << "Diga el segundo numero : ";
  cin >> numero2;
  cout << "========================\n";

  cout << "\nBien, sus 2 numeros son los siguientes : " << numero1 << " , " << numero2;
  
  return 0;
}