/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P02_promedio.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 19 10 2023
 * @brief Lee una cantidad de numeros e imprime su promedio
 * @bugs No bugs
 * @see https://docs.google.com/document/d/117pQEICTg8X6wLynstCyzt2Po8EmWVYBUbb4r19LlYg/edit
 */

#include <iostream>
#include <iomanip>

int main() {
  int contador{0};
  double suma{0.0}, numero;
  while (std::cin >> numero) {
    suma += numero;
    ++contador;
  }
  std::cout << std::endl << std::fixed << std::setprecision(2) << suma / contador << std::endl;
  return (0);
} 
