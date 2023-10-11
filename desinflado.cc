 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file desinflado.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 11 10 2023
 * @brief Lee una letra mayúscula y la imprime en minúscula
 * @bugs No bugs
 * @see https://github.com/IB-2023-2024/P05-expressions/blob/main/expressions.md
 */
#include <iostream>

int main() {
  char mayuscula;
  std::cin >> mayuscula;
  mayuscula += 32;
  std::cout << mayuscula << std::endl;
  return (0);
}