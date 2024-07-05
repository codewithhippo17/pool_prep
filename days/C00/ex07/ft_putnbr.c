#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb >= 0 && nb <= 9)
    {
        ft_putchar(nb + '0');   
    }
    else if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    
    else if (nb > 9)
    {  
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }   
}

/*int main()
{
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
     ft_putchar('\n');
    ft_putnbr(0);
     ft_putchar('\n');
    ft_putnbr(85650320);
     ft_putchar('\n');
    ft_putnbr(-150);
}*/