/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P03_orden_inverso
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 19 10 2023
 * @brief El programa lee 3 en un orden, y las devuelve en orden contrario
 * @bugs No bugs
 * @see https://docs.google.com/document/d/117pQEICTg8X6wLynstCyzt2Po8EmWVYBUbb4r19LlYg/edit
 */

#include <iostream>
#include <string>

int main() {
  std::string palabra1, palabra2, palabra3;
  std::cin >> palabra1 >> palabra2 >> palabra3;
  std::cout << std::endl << palabra3 << " " << palabra2 << " " << palabra1 << std::endl;
  return (0);
}
