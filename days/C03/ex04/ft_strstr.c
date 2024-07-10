#include <stddef.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    char *ptr_str, *to_find1;

    if (*to_find == '\0')
    {
        return str;
    }
    while (*str)
    {
        ptr_str = str;
        to_find1 = to_find;
        while (*str && *to_find1 && (*str == *to_find1))
        {
            str++;
            to_find1++;
        }
        if (*to_find1 == '\0')
        {
            return ptr_str;
        }
        str = ptr_str + 1;
    }
    return NULL;
}



/*
#include <stdio.h>
#include <string.h>


int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char to_find[] = "";

    // Using ft_strstr
    char *result_ft = ft_strstr(str1, to_find);

    // Using standard strstr
    char *result_std = strstr(str2, to_find);

    // Print results
    printf("ft_strstr result: %s\n", result_ft ? result_ft : "NULL");
    printf("strstr result: %s\n", result_std ? result_std : "NULL");

    // Check if both functions produce the same result
    if ((result_ft == NULL && result_std == NULL) || (result_ft != NULL && result_std != NULL && strcmp(result_ft, result_std) == 0)) {
        printf("ft_strstr matches strstr.\n");
    } else {
        printf("ft_strstr does not match strstr.\n");
    }

    return 0;
}
*/

