/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P48107_Division.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 11 10 2023
 * @brief Programa que divide 2 numeros enteros y devuelve la solucion y el resto de la division
 * @bugs No bugs
 * @see https://jutge.org/problems/P48107_en
 */

#include <iostream>

int main() {
  int number1, number2, integer, reminder;
  std::cin >> number1 >> number2;
  if (number2 > 0) {
    integer = number1 / number2;
    reminder = number1 % number2;
    std::cout << integer << " " << reminder << std::endl;
  }
  else if (number2 <= 0) {
    std::cout << "El 2º número ha de ser mayor de 0" << std::endl;
  }
  return 0;
}

