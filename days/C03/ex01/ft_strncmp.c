
int ft_strncmp(char *s1, char *s2, unsigned int n) {
    unsigned int i;
    i = 0;

    while (i < n && (*s1 != '\0' || *s2 != '\0')) {
        if (*s1 != *s2)        
            return (*s1 - *s2);
        if (*s1 == '\0' && *s2 == '\0')
            break;
        s1++;
        s2++;
        i++;
    }
    return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hell";
    char str3[] = "Hello";
    char str4[] = "Hella";
    char str5[] = "";
    char str6[] = "Hello";
    char str7[] = "Hello";
    char str8[] = "Hello";

    // Test case 1: Strings are identical up to n characters
    printf("Comparison result (1): %d\n", ft_strncmp(str1, str3, 4));
    printf("Expected result (1): %d\n", strncmp(str1, str3, 4));

    // Test case 2: Strings differ at some point within the first n characters
    printf("Comparison result (2): %d\n", ft_strncmp(str1, str4, 4));
    printf("Expected result (2): %d\n", strncmp(str1, str4, 4));

    // Test case 3: One string is shorter than the other within n characters
    printf("Comparison result (3): %d\n", ft_strncmp(str1, str2, 10));
    printf("Expected result (3): %d\n", strncmp(str1, str2, 10));

    // Test case 4: Both strings are empty or end at the same point within n characters
    printf("Comparison result (4): %d\n", ft_strncmp(str5, str5, 2));
    printf("Expected result (4): %d\n", strncmp(str5, str5, 2));

    // Test case 5: Testing with strings of different lengths
    printf("Comparison result (5): %d\n", ft_strncmp(str6, str7, 6));
    printf("Expected result (5): %d\n", strncmp(str6, str7, 6));

    // Test case 6: Testing with strings of same lengths but different characters
    printf("Comparison result (6): %d\n", ft_strncmp(str6, str8, 5));
    printf("Expected result (6): %d\n", strncmp(str6, str8, 5));

    return 0;
}

*/