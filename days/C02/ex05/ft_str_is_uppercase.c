int ft_str_is_uppercase(char *str)
{
    int i,res;
    res = 0;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] <= 90 && str[i] >= 65) 
        {
            res = 1;
            i++;
        }
        else
        {
            return 0;
        }
    }
    return (res);
}


/*
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main() {
    char str1[] = "HELLOWORLD";
    char str2[] = "HelloWorld";
    char str3[] = "1234";
    char str4[] = "";

    printf("Test 1: %d\n", ft_str_is_uppercase(str1)); // Should print 1
    printf("Test 2: %d\n", ft_str_is_uppercase(str2)); // Should print 0
    printf("Test 3: %d\n", ft_str_is_uppercase(str3)); // Should print 0
    printf("Test 4: %d\n", ft_str_is_uppercase(str4)); // Should print 1

    return 0;
}
*/