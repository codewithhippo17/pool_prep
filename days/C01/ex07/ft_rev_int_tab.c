#include <stdio.h>
#include <stdlib.h>

void ft_rev_int_tab(int *tab, int size)
{
    int *arr;
    arr = (int *)malloc(size * sizeof(int));
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = tab[size - i - 1];
    }
    
    for(int i = 0;i < size;i++)
    {
        tab[i] = arr[i];
    }
    free(arr);
}


/*
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ft_rev_int_tab(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/