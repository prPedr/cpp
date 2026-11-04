#include <iostream>
#include <format>
using namespace std;

int main() {
  string titulo = "O pequeno principe";
  string nome("Pedro");
  string end(10, '!');

  cout << nome.size() << endl; // Conta o numero de caracteres
  cout << nome[3] << endl;
  
  cout << format("{} {}", titulo, nome) << endl;

  nome.append(" Nascimento");
  cout << nome << endl;

  cout << end << endl;

  return 0;
}
