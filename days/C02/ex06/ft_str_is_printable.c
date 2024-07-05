int ft_str_is_alpha(char *str)
{
    int i,res;
    res = 1;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] <= 126 && str[i] >= 32)
        {
            res = 1;
        }
        else if (str[i] == '\t' || str[i] == '\n'|| str[i] == '\r' || str[i] == '\v')
        {
            res = 1;
        }
        else
        {
            return 0;
        }
        i++;
    }
    return (res);
}



/*
#include <stdio.h>



int main() {
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "Hello, World!\t1234\n";
    char str4[] = "Hello\x1FWorld"; // Contains a non-printable character (ASCII 31)

    printf("Test 1: %d\n", ft_str_is_alpha(str1)); // Should print 1
    printf("Test 2: %d\n", ft_str_is_alpha(str2)); // Should print 0
    printf("Test 3: %d\n", ft_str_is_alpha(str3)); // Should print 0
    printf("Test 4: %d\n", ft_str_is_alpha(str4)); // Should print 0

    return 0;
}
*/