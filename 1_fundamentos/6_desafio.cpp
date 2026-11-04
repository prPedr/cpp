#include <iostream>
#include <format>

using namespace std;

int main() {
  double pi, raio, resultado;

  pi = 3.14;
  
  cout << "Informe o raio da circunferencia: ";
  cin >> raio;

  resultado = pi * (raio * raio);

  cout << format("A area da circunferencia e {:.2f}", resultado);

  return 0;
}
