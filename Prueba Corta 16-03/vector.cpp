#include <iostream>
#include <vector>

void ordenacionBurbuja(std::vector<int>& numeros) {
    bool intercambiado;
    do {
        intercambiado = false;
        for (size_t i = 0; i < numeros.size() - 1; i++) {
            if (numeros[i] > numeros[i + 1]) {
                std::swap(numeros[i], numeros[i + 1]);
                intercambiado = true;
            }
        }
    } while (intercambiado);
}

int main() {
    std::vector<int> numeros;
    int numero;
    std::cout << "Ingrese los numeros a ordenar (0 para terminar): ";
    while (std::cin >> numero && numero != 0) {
        numeros.push_back(numero);
    }
    ordenacionBurbuja(numeros);
    std::cout << "Numeros ordenados: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    return 0;
}
