#include <iostream>
#include <format>
using namespace std;

int main() {
  int num1, num2;

  cout << "Escolha um numero: ";
  cin >> num1;

  cout << "Escolha outro numero: ";
  cin >> num2;

  cout << format("{} > {} -> {}", num1, num2, num1 > num2) << endl;
  cout << format("{} >= {} -> {}", num1, num2, num1 >= num2) << endl;

  cout << format("{} < {} -> {}", num1, num2, num1 < num2) << endl;
  cout << format("{} <= {} -> {}", num1, num2, num1 <= num2) << endl;

  cout << format("{} == {} -> {}", num1, num2, num1 == num2) << endl;
  cout << format("{} != {} -> {}", num1, num2, num1 != num2) << endl;

  return 0;
}
