#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

/*int main()
{
    char *c = "hamza    hdeufknqdf_iunqf fijufqoiu";
    ft_putstr(c);
    return 0;
}*/

