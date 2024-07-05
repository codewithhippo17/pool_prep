char *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 'Z' && str[i] >= 'A')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}


/*
#include <stdio.h>

char *ft_strlowcase(char *str);

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "abc123";
    char str3[] = "123XYZ";
    char str4[] = "azertyAZERTY54645 AZERazer";

    printf("Original: %s\n", str1);
    printf("Uppercase: %s\n", ft_strlowcase(str1));

    printf("Original: %s\n", str2);
    printf("Uppercase: %s\n", ft_strlowcase(str2));

    printf("Original: %s\n", str3);
    printf("Uppercase: %s\n", ft_strlowcase(str3));

    printf("Original: %s\n", str4);
    printf("Uppercase: %s\n", ft_strlowcase(str4));

    return 0;
}

*/