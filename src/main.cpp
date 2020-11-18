#include<iostream>
#include<string>
#include"power_function.hpp"

std::ostream& usage(std::ostream& os);

int main(int argc, char* argv[]) {
  try {
    if (argc != 3) {
      std::cerr << "Cantidad de argumentos inválida. Se requieren solo 2\n";
      std::cerr << usage;
      return 1;
    }
    unsigned base = std::stoi(argv[1]);
    unsigned exponent = std::stoi(argv[2]);
    FPR* function = new PowerFunction();
    unsigned result = function -> doOperation(2, base, exponent);
    std::cout << "Resultado: " << result << '\n';
    delete function;
    return 0;
  } catch(std::invalid_argument& e) {
    std::cerr << "Ha introducido un argumento que no es un número.\n";
    return 2;
  } catch(std::out_of_range& e) {
    std::cerr << "Ha introducido un número demasiado grande o inválido.\n";
    return 3;
  }
}

std::ostream& usage(std::ostream& os) {
  os << "Modo de uso: " <<program_invocation_name << " <Base> <Exponent>\n";
  return os;
}