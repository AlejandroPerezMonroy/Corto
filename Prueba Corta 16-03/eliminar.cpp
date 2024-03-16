#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros;
    int numero;
    std::cout << "Ingrese los numeros (0 para terminar): ";
    while (std::cin >> numero && numero != 0) {
        if (std::find(numeros.begin(), numeros.end(), numero) == numeros.end()) {
            numeros.push_back(numero);
        }
    }

    std::cout << "Numeros sin repetir: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    return 0;
}
