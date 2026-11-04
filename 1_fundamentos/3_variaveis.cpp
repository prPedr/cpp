#include <iostream>
#include <format>
using namespace std;

int main() {
  double preco, imposto, preco_final;
  imposto = 0.08;

  cout << "Informe o preco do produto: ";
  cin >> preco;

  preco_final = preco * (1 + imposto);

  cout << format("O preco final do produto e: {:.2f}", preco_final);

  return 0;
}
