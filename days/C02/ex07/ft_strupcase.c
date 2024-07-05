

char *ft_strupcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 122 && str[i] >= 97)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}


/*
#include <stdio.h>

char *ft_strupcase(char *str);

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "abc123";
    char str3[] = "123XYZ";
    char str4[] = "azertyAZERTY54645 AZERazer";

    printf("Original: %s\n", str1);
    printf("Uppercase: %s\n", ft_strupcase(str1));

    printf("Original: %s\n", str2);
    printf("Uppercase: %s\n", ft_strupcase(str2));

    printf("Original: %s\n", str3);
    printf("Uppercase: %s\n", ft_strupcase(str3));

    printf("Original: %s\n", str4);
    printf("Uppercase: %s\n", ft_strupcase(str4));

    return 0;
}

*/