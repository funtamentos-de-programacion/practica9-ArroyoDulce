/*
 * Este programa utiliza un apuntadores para invertir el contenido de un arreglo
 *
 */

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *start = arr;
    int size = sizeof(arr)/sizeof(arr[0]); //Obtener el tamaño de un arreglo cuando no lo conocemos
    int *end = arr + (size - 1);
    
    printf("[ ");
    for (int i = 0; i < 5; i++)
        printf("%d, ", arr[i]);
    printf("]\n");

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    // Mostrar el arreglo invertido
    printf("[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
    
    return 0;
}
