#include <stdio.h>

int main()
{
    int arr[3][3];

    int valor = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = valor;
            valor++;
        }
    }
 
    int *ptr = &arr[0][0];

    // Acceso usando índices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", *(ptr + i * 3 + j));
        
        printf("\n");
    }
    
    return 0;
}