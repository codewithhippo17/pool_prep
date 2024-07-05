#include <unistd.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int b = 1, a = 0;
    while (a <= 98)
    {
        b = a + 1;
       while (b <= 99)
       {
            ft_putchar((a / 10) + '0');
            ft_putchar((a % 10) + '0');
            write(1, " ", 1);
            ft_putchar((b / 10 + '0'));
            ft_putchar((b % 10) + '0');
            if(a == 98)
            {
                ft_putchar('\n');
                break;
            }     
            write(1, ",", 1);
            write(1, " ", 1);
            b++;
       }
       a++;
    }
}

int main()
{
    ft_print_comb2();
}