#include <iostream>
#include <vector>

int main() {
    std::vector<int> vectorPredefinido = {10, 20, 30, 40, 50};
    int numeroBuscado;
    std::cout << "Ingrese el numero a buscar: ";
    std::cin >> numeroBuscado;

    for (size_t i = 0; i < vectorPredefinido.size(); i++) {
        if (vectorPredefinido[i] == numeroBuscado) {
            std::cout << "El numero " << numeroBuscado << " está en la posicion " << i << ".\n";
            return 0;
        }
    }
    std::cout << "El numero no está presente en el vector.\n";
    return 0;
}
