int ft_char_is_alphanumeric(char c)
{

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
	{
        return (1);
    }
    return (0);        
}




char *ft_strcapitalize(char *str)
{
    int f, i;
    i = 0;
    f = 1;
    while (str[i])
    {
        if (ft_char_is_alphanumeric(str[i]))
        {
            if ((str[i] <= 'z' && str[i] >= 'a') && f == 1)
            {
                str[i] = str[i] - 32;
            }
            else if ((str[i] <= 'Z' && str[i] >= 'A') && f == 0)
            {
                str[i] = str[i] + 32;
            }
            f = 0;
        }
        else
        {
            f = 1;
        }
        i++;
    }
    return str;
}

/*
#include <stdio.h>
int main() {
    char str3[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("Original: %s\n", str3);
    printf("Capitalized: %s\n\n", ft_strcapitalize(str3));

    return 0;
}

*/