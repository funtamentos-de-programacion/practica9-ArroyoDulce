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

    // Acceso usando índices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
            
        printf("\n");
    }
    
    return 0;
}
