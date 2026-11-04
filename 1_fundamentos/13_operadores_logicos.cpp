#include <iostream>
#include <format>
using namespace std;

int main() {
  string nome;
  cout << "Qual o seu nome? ";
  cin >> nome;

  double notaFinal;
  cout << "Qual a sua nota final? ";
  cin >> notaFinal;

  double aprovado, recuperacao, reprovado;
  aprovado = notaFinal >= 7;
  recuperacao = notaFinal < 7 && notaFinal >= 5;
  reprovado = notaFinal < 5;

  if (aprovado) {
    cout << format("{}, voce foi aprovado, sua nota foi: {}", nome, notaFinal) << endl;
  } else if (recuperacao) {
    cout << format("{}, voce esta de recuperacao, sua nota foi: {}", nome, notaFinal) << endl;
  } else if (reprovado) {
    cout << format("{}, voce foi reprovado, sua nota foi: {}", nome, notaFinal) << endl;
  }

  return 0;
}
