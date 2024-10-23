#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int *arr_ptr[3];
    
    arr_ptr[0] = &a;
    arr_ptr[1] = &b;
    arr_ptr[2] = &c;

    printf("[ ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d", *arr_ptr[i]);
        if (i < 2)
            printf(", ");
    }
    printf(" ]");

    return 0;
}
