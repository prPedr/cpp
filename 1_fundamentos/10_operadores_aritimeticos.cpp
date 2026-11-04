#include <iostream>
#include <format>
using namespace std;

int main() {
  int num1, num2, soma, subtracao, divisao, multiplicacao, resto;

  cout << "Informe um numero: ";
  cin >> num1;

  cout << "Informe outro numero: ";
  cin >> num2;

  soma = num1 + num2;
  subtracao = num1 - num2;
  divisao = num1 / num2;
  multiplicacao = num1 * num2;
  resto = num1 % num2;
  
  cout << format("{} + {} = {}", num1, num2, soma) << endl;
  cout << format("{} - {} = {}", num1, num2, subtracao) << endl;
  cout << format("{} / {} = {}", num1, num2, divisao) << endl;
  cout << format("{} x {} = {}", num1, num2, multiplicacao) << endl;
  cout << format("{} % {} = {}", num1, num2, resto) << endl;

  return 0;
}
