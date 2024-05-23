#include <iostream>
using namespace std;

// Função principal
int main() {
  int cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9, soma1, x1, soma2, x2;

  // Solicita ao usuário que digite o CPF
  cout << "Digite seu cpf: ";
  cin >> cpf;

  // Extrai os dígitos individuais do CPF
  d1 = cpf / 100000000;
  d2 = cpf / 10000000 % 10;
  d3 = cpf / 1000000 % 10;
  d4 = cpf / 100000 % 10;
  d5 = cpf / 10000 % 10;
  d6 = cpf / 1000 % 10;
  d7 = cpf / 100 % 10;
  d8 = cpf / 10 % 10;
  d9 = cpf % 10;

  // Cálculo do primeiro dígito verificador
  soma1 = d1 * 10 + d2 * 9 + d3 * 8 + d4 * 7 + d5 * 6 + d6 * 5 + d7 * 4 + d8 * 3 + d9
   * 2;
  soma1 = soma1 % 11;
  if (soma1 < 2) {
    x1 = 0;
    cout << "\n o primeiro digito verificador é: " << x1;
  } else {
    x1 = 11 - soma1;
    cout << "\n o primeiro digito verificador é: " << x1;
  }

  // Cálculo do segundo dígito verificador
  soma2 = d1 * 11 + d2 * 10 + d3 * 9 + d4 * 8 + d5 * 7 + d6 * 6 + d7 * 5 + d8 * 4 + d9
   * 3 + x1 * 2;
  soma2 = soma2 % 11;

  if (soma2 < 2) {
    x2 = 0;
    cout << "\n o segundo digito verificador é: " << x2;
  } else {
    x2 = 11 - soma2;
    cout << "\n o segundo digito verificador é: " << x2;
  }

  // Exibe o CPF completo com os dígitos verificadores
  cout << "\n o cpf completo é: " << d1 << d2 << d3 << "." << d4 << d5 << d6 << "."
  << d7 << d8 << d9 << "-" << x1 << x2;

  return 0;
}
