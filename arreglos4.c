#include <stdio.h>

int suma(int *a, int t);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int resultado = suma(arr, 5);
    
    printf("%d", resultado);

    return 0;
}

int suma(int *a, int t)
{
    int res = 0;
    for (int i = 0; i < t; i++)
    {
        res += a[i];
    }

    return res;
}
