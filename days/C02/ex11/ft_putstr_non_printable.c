#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void ft_putstr_non_printable(char *str)
{
    while (*str)
    {
        if ((*str) <= 126 && (*str) >= 32)
            ft_putchar(*str);                         //to print the printable characters 
        else    {    
            ft_putchar('\\');
            char D1;
            D1 = (*str / 16) % 16;                      //print the backslash and the non-printable characters
            if (D1 <= 9)
                ft_putchar('0' + D1);
            else
                ft_putchar('a' + (D1 - 10));           //(D1 - 10)   if D1 = 10 we should print 'a'  
            char D2;
            D2 = *str % 16;
            if (D2 <= 9)
                ft_putchar('0' + D2);
            else
                ft_putchar('a' + (D2 - 10));   
        }
        str++;
    }
}


int main() {
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    return 0;
}



