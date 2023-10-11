 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file boolean_operators.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 11 10 2023
 * @brief Imprime la tabla de la verdad (OR y AND) de dos variables.
 * @bugs No bugs
 * @see https://github.com/IB-2023-2024/P05-expressions/blob/main/expressions.md
 */
#include <iostream>

int main() {
  bool variable_a{false}, variable_b{false};
  std::cout << "=======================================================================\n";
  std::cout << "Valor de la variable a: " << variable_a << std::endl; 
  std::cout << "Valor de la variable b: " << variable_b << std::endl; 
  std::cout << "a AND b: " << (variable_a && variable_b) << "\na OR b: " << (variable_a || variable_b) << std::endl;
  variable_b = true;
  std::cout << "=======================================================================\n";
  std::cout << "Valor de la variable a: " << variable_a << std::endl; 
  std::cout << "Valor de la variable b: " << variable_b << std::endl; 
  std::cout << "a AND b: " << (variable_a && variable_b) << "\na OR b: " << (variable_a || variable_b) << std::endl;
  variable_a = true;
  variable_b = false;
  std::cout << "=======================================================================\n";
  std::cout << "Valor de la variable a: " << variable_a << std::endl; 
  std::cout << "Valor de la variable b: " << variable_b << std::endl; 
  std::cout << "a AND b: " << (variable_a && variable_b) << "\na OR b: " << (variable_a || variable_b) << std::endl;
  variable_b = true;
  std::cout << "=======================================================================\n";
  std::cout << "Valor de la variable a: " << variable_a << std::endl; 
  std::cout << "Valor de la variable b: " << variable_b << std::endl; 
  std::cout << "a AND b: " << (variable_a && variable_b) << "\na OR b: " << (variable_a || variable_b) << std::endl;
  return (0);
}