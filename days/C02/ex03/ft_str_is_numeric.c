int ft_str_is_numeric(char *str)
{
    int i,res;
    res = 0;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] <= 57 && str[i] >= 48) 
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
    char str1[] = "152052622";
    char str2[] = "17754545655Hellocvbndfghertydfgcvbdfrgtdfgdfgerty";
    char str3[] = "15871587";

    printf("Test 1: %d\n", ft_str_is_numeric(str1)); // Should print 1
    printf("Test 2: %d\n", ft_str_is_numeric(str2)); // Should print 0
    printf("Test 3: %d\n", ft_str_is_numeric(str3)); // Should print 1

    return 0;
}
*/