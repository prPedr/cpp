#include <iostream>
#include <format>
using namespace std;

int main() {
  string nome;

  cout << "Qual o seu nome? ";
  cin >> nome;

  cout << format("Seja bem vindo {}", nome) << endl;
}
