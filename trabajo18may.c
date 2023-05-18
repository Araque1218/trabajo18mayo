#include <stdio.h>
#include <stdlib.h>

int main() {
    int dimension;

    printf("Ingrese la dimensión de la matriz: ");
    scanf("%d", &dimension);

    // Crear la matriz
    int matriz[dimension][dimension];

    // Inicializar la matriz en 0
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            matriz[i][j] = 0;
        }
    }

    // Establecer 1 en la diagonal principal
    for (int i = 0; i < dimension; i++) {
        matriz[i][i] = 1;
    }


