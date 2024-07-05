void ft_sort_int_tab(int *tab, int size)
{
    int temp,j;
    for (int i = 1; i < size; i++)
    {
        temp = tab[i];
        for (j = i; j > 0 && temp < tab[j - 1]; j--)
        {
            tab[j] = tab[j - 1];
        }
        tab[j] = temp;
    }
}

#include <stdio.h>
int main()
{
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ft_sort_int_tab(arr, n);

    printf("Sorted  array  : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}