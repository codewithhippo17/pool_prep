int ft_str_is_alpha(char *str)
{
    int i,res;
    res = 0;
    i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] <= 90 && str[i] >= 65) || (str[i] <= 122 && str[i] >= 97))
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
#include <ctype.h>



int main() {
    char str1[] = "HelloWorld";
    char str2[] = "Hellocvbndfghertydfgcvbdfrgtdfgdfgerty";
    char str3[] = "jhflkùk iugkjb iugub";

    printf("Test 1: %d\n", ft_str_is_alpha(str1)); // Should print 1
    printf("Test 2: %d\n", ft_str_is_alpha(str2)); // Should print 0
    printf("Test 3: %d\n", ft_str_is_alpha(str3)); // Should print 1

    return 0;
}
*/
