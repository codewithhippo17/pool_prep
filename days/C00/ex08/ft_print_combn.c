#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void print_num(int arr[], int n)
{
    int i;
    i =0;
    while (i < n)
    {
        ft_putchar(arr[i] + '0');
        i++;
    }
    if (arr[0] < 10 - n)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }    
}

int check(int arr[], int n)
{
    int j;
    j = 1;
    while (j <= n)
    {
        if (arr[n - j] - arr[n - j - 1] == 1)
        {
            j++;
        }
        else
        {
            break;
        }
    }
    return (j);
}

void reset(int arr[], int n, int j)
{ 
    while ()
    {
        arr[n - j - 1]++;
        arr[n - j] = arr[n - j - 1] + 1;
        j++;
    }
} 


void ft_print_combn(int n)
{
    int arr[10];
    int i;
    int a;
    i = 0;
    while (i < n)
    {
        arr[i] = i;
        i++;
    }
    while (arr[0] <= 10 - n)
    {
        if (arr[n - 1] < 9)
        {
            print_num(arr, n);
            arr[n -1]++;
        }
        else
        {
            print_num(arr, n);
            a = check(arr, n);
            reset(arr, n, a);
        }  
    }
}

int main()
{
    ft_print_combn(2);
}