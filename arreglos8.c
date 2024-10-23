#include <stdio.h>

int suma(int arr[3][3], int filas);

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int resultado = suma(arr, 3); // pasa a la función el arreglo y su tamaño
    
    printf("La suma de los elementos es %d\n", resultado);
    
    return 0;
}

int suma(int arr[3][3], int filas)
{
    int resultado = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < 3; j++)
            resultado += arr[i][j];
    }

    return resultado;
}