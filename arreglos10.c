#include <iostream>

int main() {
    int filas, columnas;
    
    // Solicitar tamaño de la matriz
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;
    
    // Reservar memoria dinámica
    int **matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }
    
    // Llenar la matriz con valores ingresados por el usuario
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << "Ingrese valor para [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }
    
    // Mostrar la matriz
    std::cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    // Liberar memoria
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    
    return 0;
}
